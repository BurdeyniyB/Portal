using UnityEngine;
internal interface ChangePositionBehavior
{
    public Vector3 GetDeltaPositionX(Vector3 raycastPosition, Vector3 deltaPosition, float deltaTwoPosX);
    public Vector3 GetDeltaPositionZ(Vector3 raycastPosition, Vector3 deltaPosition, float deltaTwoPosZ);
}

