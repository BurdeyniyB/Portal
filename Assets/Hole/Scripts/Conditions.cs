using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;

public class Conditions : MonoBehaviour
{
    [SerializeField] private ChangeScale _changeScale;
    [SerializeField] private ChangeHoleBorderColor _changeHoleBorderColor;
    [SerializeField] private int _needCountObstacles;
    [SerializeField] private float _deltaChangeScale;
    private int _countCollisionObstacle;
    private void OnCollisionEnter(Collision collision)
    {
        Destroy(collision.gameObject);
        CaltulateProgress();
    }

    private void CaltulateProgress()
    {
        _countCollisionObstacle++;

        if(_countCollisionObstacle % _needCountObstacles == 0)
        {
            _countCollisionObstacle = 0;
            StartCoroutine(_changeScale.ScaleHole(_deltaChangeScale));
        }

        _changeHoleBorderColor.ChangeFalledBorder((float)_countCollisionObstacle / (float)_needCountObstacles);
    }
}
