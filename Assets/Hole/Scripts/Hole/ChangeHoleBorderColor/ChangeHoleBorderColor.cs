using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangeHoleBorderColor : MonoBehaviour
{
    [SerializeField] private Image _borderGreen;
    
    public void ChangeFalledBorder(float amount)
    {
        Debug.Log("amount = " + amount);
        _borderGreen.fillAmount = amount;
    }
}
