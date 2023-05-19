using UnityEngine;

public class Observer : MonoBehaviour
{
    [SerializeField] private Conditions _conditions;
    [SerializeField] private ChangeScale _changeScale;
    [SerializeField] private ChangeHoleBorderColor _changeHoleBorderColor;
    [SerializeField] private LevelProgressLine _levelProgressLine;

    private void OnEnable()
    {
        _conditions.OnChangeFalledBorder += ChangeFalledBorder;
        _conditions.OnChangeScale += ScaleHole;
    }

    private void OnDisable()
    {
        _conditions.OnChangeFalledBorder -= ChangeFalledBorder;
        _conditions.OnChangeScale -= ScaleHole;
    }

    void ChangeFalledBorder(float amount)
    {
        _changeHoleBorderColor.ChangeFalledBorder(amount);
        _levelProgressLine.ChangeFalledBorder();
    }

    private void ScaleHole(float _deltaChangeScale)
    {
        Debug.Log("_deltaChangeScale = " + _deltaChangeScale);
        StartCoroutine(_changeScale.ScaleHole(_deltaChangeScale));
    }

    public void ChangeFalledBorder()
    {
        throw new System.NotImplementedException();
    }
}
