using UnityEngine;
using UnityEngine.UI;

public class NumberLevel : MonoBehaviour
{
    [SerializeField] private LoadDataWhenGameStart _gameStart;
    [SerializeField] private Text _numberLeft;
    [SerializeField] private Text _numberRight;

    private void OnEnable()
    {
        _gameStart.SetNumber += ChangeText;
    }

    private void OnDisable()
    {
        _gameStart.SetNumber -= ChangeText;
    }

    private void ChangeText(int number)
    {
        Debug.Log("number " + number);
        _numberLeft.text = number.ToString();
        _numberRight.text = (number + 1).ToString();
    }
}
