using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class OnChangePosition : MonoBehaviour
{
    public PolygonCollider2D hole2DCollider;
    public PolygonCollider2D ground2DCollider;
    public MeshCollider GeneratedMeshCollider;
    public Collider GroundCollider;
    public float initialScale = 0.5f;
    public float speed = 1;
    private Vector3 _raycastPosition;
    Mesh GeneratedMesh;

    public void Move(BaseEventData myEvent)
    {
        if (((PointerEventData)myEvent).pointerCurrentRaycast.isValid)
        {
            Vector3 raycastPosition = ((PointerEventData)myEvent).pointerCurrentRaycast.worldPosition;
            if ((Mathf.Abs(raycastPosition.x) <= Mathf.Abs(GroundCollider.gameObject.transform.localScale.x - transform.localScale.x / 2) / 2)
                && (Mathf.Abs(raycastPosition.z) <= Mathf.Abs(GroundCollider.gameObject.transform.localScale.z - transform.localScale.z / 2) / 2))
            {
                _raycastPosition = raycastPosition;
            }
        }
    }

    public IEnumerator ScaleHole()
    {
        Vector3 StartScale = transform.localScale;
        Vector3 EndScale = StartScale * 2;

        float time = 0;
        while(time <= 0.4f)
        {
            time += Time.deltaTime;
            transform.localScale = Vector3.Lerp(StartScale, EndScale, time);
            yield return null;
        }
    }

    private void Start()
    {
        GameObject[] AllGOs = FindObjectsOfType(typeof(GameObject)) as GameObject[];
        foreach (GameObject go in AllGOs)
        {
            if(go.layer == LayerMask.NameToLayer("Obstacle"))
            {
                Physics.IgnoreCollision(go.GetComponent<Collider>(), GeneratedMeshCollider, true);
            }
        }
    }

    private void Update()
    {
        if(_raycastPosition != null && transform.position != _raycastPosition)
        {
            transform.position = Vector3.Lerp(transform.position, _raycastPosition, Time.deltaTime * speed);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Physics.IgnoreCollision(other, GroundCollider, true);
        Physics.IgnoreCollision(other, GeneratedMeshCollider, false);
    }

    private void OnTriggerExit(Collider other)
    {
        Physics.IgnoreCollision(other, GroundCollider, false);
        Physics.IgnoreCollision(other, GeneratedMeshCollider, true);
    }

    private void FixedUpdate()
    {
        if(transform.hasChanged)
        {
            transform.hasChanged = false;
            hole2DCollider.transform.position= new Vector2(transform.position.x, transform.position.z);
            hole2DCollider.transform.localScale = transform.localScale * initialScale;
            MakeHole2D();
            Make3DMeshCollider();
        }
    }

    private void MakeHole2D()
    {
        Vector2[] PointPosition = hole2DCollider.GetPath(0);

        for (int i = 0; i < PointPosition.Length; i++)
        {
            PointPosition[i] = hole2DCollider.transform.TransformPoint(PointPosition[i]);
        }

        ground2DCollider.pathCount = 2;
        ground2DCollider.SetPath(1, PointPosition);
    }

    private void Make3DMeshCollider()
    {
        if(!GeneratedMesh) { Destroy(GeneratedMesh);}
        GeneratedMesh = ground2DCollider.CreateMesh(true, true);
        GeneratedMeshCollider.sharedMesh = GeneratedMesh;
    }
}
