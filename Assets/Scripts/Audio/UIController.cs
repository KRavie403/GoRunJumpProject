using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    [SerializeField] private Image _BGMButtonImage, _SFXButtonImage;
    [SerializeField] private Sprite _BGMButtonSprite, _SFXButtonSprite, _currentBGMButtonSprite, _currentSFXButtonSprite;
    private bool _isBGMOn = true, _isSFXOn = true;

    public Slider _bgmSlider, _sfxSlider;

    public void ToggleBGM()
    {
        AudioManager.Instance.ToggleBGM();
    }
    public void ToggleSFX()
    {
        AudioManager.Instance.ToggleSFX();
    }
    public void BGMVolume(float volume)
    {
        AudioManager.Instance.BGMVolume(_bgmSlider.value);
    }
    public void SFXVolume(float volume)
    {
        AudioManager.Instance.SFXVolume(_sfxSlider.value);
    }
    public void BGMButtonClick()
    {
        if (_isBGMOn)
        {
            _BGMButtonImage.sprite = _BGMButtonSprite;
            _isBGMOn = false;
        }
        else
        {
            _BGMButtonImage.sprite = _currentBGMButtonSprite;
            _isBGMOn = true;
        }
    }
    public void SFXButtonClick()
    {
        if (_isSFXOn)
        {
            _SFXButtonImage.sprite = _SFXButtonSprite;
            _isSFXOn = false;
        }
        else
        {
            _SFXButtonImage.sprite = _currentSFXButtonSprite;
            _isSFXOn = true;
        }
    }
}
