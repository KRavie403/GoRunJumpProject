using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    public Sound[] bgmSounds, sfxSounds;
    [SerializeField] private AudioSource _bgmSource, _sfxSource;


    public static AudioManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<AudioManager>();
                if (instance == null)
                {
                    GameObject audioManager = new GameObject("AudioManager");
                    instance = audioManager.AddComponent<AudioManager>();
                    DontDestroyOnLoad(audioManager);
                }
            }
            return instance;
        }
    }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void OnSceneChanged(Scene scene, LoadSceneMode mode)
    {
        string sceneName = scene.name;

        if ($"{sceneName}BGM" != null)
        {
            PlayBGM($"{sceneName}BGM");
        }
        else
        {
            Debug.LogWarning("BGM for scene " + sceneName + " not found.");
        }
    }

    private void Start()
    {
        SceneManager.sceneLoaded += OnSceneChanged;
        PlayBGM("0.TitleSceneBGM");
    }
    public void PlayBGM(string title)
    {
        Debug.Log("title: " + title);
        Sound s = Array.Find(bgmSounds, x => x.title == title);

        if(s == null)
        {
            Debug.Log("Sound Not Found");
        }

        else
        {
            _bgmSource.clip = s.clip;
            _bgmSource.Play();
        }
    }

    public void PlaySFX(string title)
    {
        Sound s = Array.Find(sfxSounds, x => x.title == title);

        if (s == null)
        {
            Debug.Log("Sound Not Found");
        }

        else
        {
            _sfxSource.PlayOneShot(s.clip);
        }
    }

    public void ToggleBGM()
    {
        _bgmSource.mute = !_bgmSource.mute;
    }
    public void ToggleSFX()
    {
        _sfxSource.mute = !_sfxSource.mute;
    }
    public void BGMVolume(float volume)
    {
        _bgmSource.volume = volume * 0.5f;
    }
    public void SFXVolume(float volume)
    {
        _sfxSource.volume = volume * 0.5f;
    }
    public void Click()
    {
        AudioManager.Instance.PlaySFX("Click");
    }
    public void StartButton()
    {
        AudioManager.Instance.PlaySFX("Start");
    }
    public void StopMusic()
    {
        _bgmSource.Stop();
    }
}
