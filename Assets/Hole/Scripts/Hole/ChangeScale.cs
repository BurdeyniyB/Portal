using System.Collections;
using UnityEngine;

public class ChangeScale : MonoBehaviour
{
    private float _timeOfChangeScale = 0.4f;
    public IEnumerator ScaleHole()
    {
        Vector3 StartScale = transform.localScale;
        Vector3 EndScale = StartScale * 2;

        float time = 0;
        while (time <= _timeOfChangeScale)
        {
            time += Time.deltaTime;
            transform.localScale = Vector3.Lerp(StartScale, EndScale, time);
            yield return null;
        }
    }
}
