using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;

public class Conditions : MonoBehaviour
{
    public int points;
    public OnChangePosition OnChangePosition;
    private void OnCollisionEnter(Collision collision)
    {
        Destroy(collision.gameObject);
        CaltulateProgress();
    }

    private void CaltulateProgress()
    {
        points++;

        if(points % 10 == 0)
        {
            StartCoroutine(OnChangePosition.ScaleHole());
        }
    }
}
