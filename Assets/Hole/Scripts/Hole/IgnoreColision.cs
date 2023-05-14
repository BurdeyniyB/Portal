using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IgnoreColision : MonoBehaviour
{
    [SerializeField] private MeshCollider _generatedMeshCollider;
    [SerializeField] private Collider _groundCollider;

    private void Start()
    {
        FindAllGameObject();
    }

    private void FindAllGameObject()
    {
        GameObject[] AllGOs = FindObjectsOfType(typeof(GameObject)) as GameObject[];
        foreach (GameObject go in AllGOs)
        {
            if (go.layer == LayerMask.NameToLayer("Obstacle"))
            {
                Physics.IgnoreCollision(go.GetComponent<Collider>(), _generatedMeshCollider, true);
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Physics.IgnoreCollision(other, _groundCollider, true);
        Physics.IgnoreCollision(other, _generatedMeshCollider, false);
    }

    private void OnTriggerExit(Collider other)
    {
        Physics.IgnoreCollision(other, _groundCollider, false);
        Physics.IgnoreCollision(other, _generatedMeshCollider, true);
    }
}
