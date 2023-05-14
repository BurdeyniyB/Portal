using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ChangeGroundMesh : MonoBehaviour
{
    [SerializeField] private PolygonCollider2D _hole2DCollider;
    [SerializeField] private PolygonCollider2D _ground2DCollider;
    [SerializeField] private MeshCollider _generatedMeshCollider;
    [SerializeField] private float initialScale = 0.5f;
    private Mesh GeneratedMesh;

    private void FixedUpdate()
    {
        if (transform.hasChanged)
        {
            transform.hasChanged = false;
            _hole2DCollider.transform.position = new Vector2(transform.position.x, transform.position.z);
            _hole2DCollider.transform.localScale = transform.localScale * initialScale;
            MakeHole2D();
            Make3DMeshCollider();
        }
    }

    private void MakeHole2D()
    {
        Vector2[] PointPosition = _hole2DCollider.GetPath(0);

        for (int i = 0; i < PointPosition.Length; i++)
        {
            PointPosition[i] = _hole2DCollider.transform.TransformPoint(PointPosition[i]);
        }

        _ground2DCollider.pathCount = 2;
        _ground2DCollider.SetPath(1, PointPosition);
    }

    private void Make3DMeshCollider()
    {
        if (!GeneratedMesh) { Destroy(GeneratedMesh); }
        GeneratedMesh = _ground2DCollider.CreateMesh(true, true);
        _generatedMeshCollider.sharedMesh = GeneratedMesh;
    }
}
