
using UnityEngine;

internal class CreateNewPositionHole : ChangePositionBehavior
{
    public Vector3 GetDeltaPositionX(Vector3 raycastPosition, Vector3 deltaPosition, float deltaTwoPosX)
    {
        if (Mathf.Abs(raycastPosition.x) > Mathf.Abs(deltaTwoPosX))
        {
            if (raycastPosition.x >= 0)
            {
                deltaPosition = new Vector3(deltaTwoPosX, 0f, deltaPosition.z);
            }
            else
            {
                deltaPosition = new Vector3(-deltaTwoPosX, 0f, deltaPosition.z);
            }
        }

        return deltaPosition;
    }

    public Vector3 GetDeltaPositionZ(Vector3 raycastPosition, Vector3 deltaPosition, float deltaTwoPosZ)
    {
        if (Mathf.Abs(raycastPosition.z) > Mathf.Abs(deltaTwoPosZ))
        {
            if (raycastPosition.z >= 0)
            {
                deltaPosition = new Vector3(deltaPosition.x, 0f, deltaTwoPosZ);
            }
            else
            {
                deltaPosition = new Vector3(deltaPosition.x, 0f, -deltaTwoPosZ);
            }
        }

        return deltaPosition;
    }
}
