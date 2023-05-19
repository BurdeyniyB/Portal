using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


public class Move : MonoBehaviour
{
    public event Action MoveCompleted;

    [SerializeField] private Collider _groundCollider;
    [SerializeField] private float speed = 1;
    [Range(0.1f, 0.5f)][SerializeField] private float _distanceFactorX = 0.4f;
    [Range(0.1f, 0.5f)][SerializeField] private float _distanceFactorZ = 0.2f;

    private CreateNewPositionHole _createNewPositionHole = new CreateNewPositionHole();
    private float _startPositionX;
    private float _startPositionZ;
    private Vector3 _raycastPosition;

    private void Start()
    {
        _startPositionX = transform.localScale.x;
        _startPositionZ = transform.localScale.z;
    }

    private void Update()
    {
        MoveObject();
    }

    private void MoveObject()
    {
        if (_raycastPosition != null && transform.position != _raycastPosition)
        {
            transform.position = Vector3.Lerp(transform.position, _raycastPosition, Time.deltaTime * speed);
        }
    }

    public void CalculateTrajectory(BaseEventData myEvent)
    {
        if (((PointerEventData)myEvent).pointerCurrentRaycast.isValid)
        {
            Vector3 raycastPosition = ((PointerEventData)myEvent).pointerCurrentRaycast.worldPosition;
            Vector3 deltaPosition = raycastPosition;
            float deltaTwoPosX = (_groundCollider.gameObject.transform.localScale.x - transform.localScale.x) / 2f + (transform.localScale.x - _startPositionX) / (transform.localScale.x + _startPositionX) - (transform.localScale.x - _startPositionX) / (transform.localScale.x + _startPositionX) * _distanceFactorX;
            float deltaTwoPosZ = (_groundCollider.gameObject.transform.localScale.z - transform.localScale.z) / 2f + (transform.localScale.z - _startPositionZ) / (transform.localScale.z + _startPositionZ) - (transform.localScale.z - _startPositionZ) / (transform.localScale.z + _startPositionZ) * _distanceFactorZ;

            deltaPosition = GetDeltaPositionX(raycastPosition, deltaPosition, deltaTwoPosX);
            deltaPosition = GetDeltaPositionZ(raycastPosition, deltaPosition, deltaTwoPosZ);
            _raycastPosition = deltaPosition;
            MoveCompleted.Invoke();
        }
    }

    private Vector3 GetDeltaPositionX(Vector3 raycastPosition, Vector3 deltaPosition, float deltaTwoPosX)
    {
        return deltaPosition = _createNewPositionHole.GetDeltaPositionX(raycastPosition, deltaPosition, deltaTwoPosX);
    }

    private Vector3 GetDeltaPositionZ(Vector3 raycastPosition, Vector3 deltaPosition, float deltaTwoPosZ)
    {
        return deltaPosition = _createNewPositionHole.GetDeltaPositionZ(raycastPosition, deltaPosition, deltaTwoPosZ);
    }
}

