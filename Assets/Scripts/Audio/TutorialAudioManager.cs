using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialAudioManager : MonoBehaviour
{
    private void Start()
    {
        Invoke("PlayHelloSFX", 0.5f);
    }

    private void PlayHelloSFX()
    {
        AudioManager.Instance.PlaySFX("Hello");
    }
}
