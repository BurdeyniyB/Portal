using System;
using UnityEngine;
using UnityEngine.UI;

public class LevelProgressLine : MonoBehaviour, Border
{
    public event Action EndGame;

    [SerializeField] private Transform _obstacleParentObject;
    [SerializeField] private Image _borderRed;
    private int _childOnStart;
    private int _child;


    private void Start()
    {
        _childOnStart = _obstacleParentObject.childCount;
        _child = _childOnStart;
    }

    public void ChangeFalledBorder()
    {
        _child--;
        _borderRed.fillAmount = 1 - (float)_child / (float)_childOnStart;
        if (_child == 0) { EndGame.Invoke(); }
    }

    public void ChangeFalledBorder(float amount)
    {
        throw new System.NotImplementedException();
    }
}
