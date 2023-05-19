using UnityEngine;
using UnityEngine.UI;

public class ChangeHoleBorderColor : MonoBehaviour, Border
{
    [SerializeField] private Image _borderGreen;

    public void ChangeFalledBorder(float amount)
    {
        Debug.Log("amount = " + amount);
        _borderGreen.fillAmount = amount;
    }

    public void ChangeFalledBorder()
    {
        throw new System.NotImplementedException();
    }
}
