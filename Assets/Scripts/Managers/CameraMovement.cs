using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CameraMovement : MonoBehaviour
{
    [SerializeField] private Transform _player;

    private Vector3 Dir = Vector3.zero;

    private void Awake()
    {
        Dir = transform.position - _player.position;
    }

    private void Update()
    {
        Follow();
    }

    private void Follow()
    {
        transform.position = _player.position + Dir;
    }
}
