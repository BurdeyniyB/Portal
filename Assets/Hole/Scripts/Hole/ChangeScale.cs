using System.Collections;
using UnityEngine;

public class ChangeScale : MonoBehaviour
{
    private float _timeOfChangeScale = 0.4f;
    public IEnumerator ScaleHole(float _deltaChangeScale)
    {
        Debug.Log("_deltaChangeScale = " + _deltaChangeScale);
        Vector3 StartScale = transform.localScale;
        Vector3 EndScale = new Vector3(StartScale.x * _deltaChangeScale, 1, StartScale.z * _deltaChangeScale);

        float time = 0;
        while (time <= _timeOfChangeScale)
        {
            time += Time.deltaTime;
            transform.localScale = Vector3.Lerp(StartScale, EndScale, time);
            yield return null;
        }
    }
}
