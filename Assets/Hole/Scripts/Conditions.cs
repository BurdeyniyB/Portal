using System;
using UnityEngine;

public class Conditions : MonoBehaviour
{
    public event Action<float> OnChangeFalledBorder;
    public event Action<float> OnChangeScale;

    [SerializeField] private int _needCountObstacles;
    [SerializeField] private float _deltaChangeScale;

    private int _countCollisionObstacleKilled;
    private void OnCollisionEnter(Collision collision)
    {
            Destroy(collision.gameObject);
            CaltulateProgress();
    }

    private void CaltulateProgress()
    {
        _countCollisionObstacleKilled++;

        if(_countCollisionObstacleKilled % _needCountObstacles == 0)
        {
            _countCollisionObstacleKilled = 0;
            OnChangeScale.Invoke(_deltaChangeScale);
        }

        OnChangeFalledBorder.Invoke((float)_countCollisionObstacleKilled / (float)_needCountObstacles);
    }
}
