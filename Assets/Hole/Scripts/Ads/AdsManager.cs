using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdsManager : MonoBehaviour
{
    [SerializeField] private BannerAds _bannerAds;
    [SerializeField] private InterstitialAds _interstitialAds;
    private Data _data = new Data();

    private void Start()
    {
        CallBanner();
        Callinterstitial();
    }

    private void CallBanner()
    {
        _bannerAds.CallBanner();
    }

    private void Callinterstitial()
    {
        int count = _data.GetCountLose();
        if(count % 1 == 0 && count != 0)
        {
            _data.SetCountLose(0);
            _interstitialAds.CallInterstitial();
        }
    }
}
