using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RespawnController : MonoBehaviour
{
    public Transform respawnPoint;
    [SerializeField] private GameObject _respawnParticlePrefab;

    [SerializeField] private AnimatorController _animatorController;

    private void Update()
    {
        if (transform.position.y < -300f)
        {
            Respawn();
        }
        else if (transform.position.y < -80f)
        {
            _animatorController.PlayFall2();
        }
        else if (transform.position.y < -1f)
        {
            _animatorController.PlayFall3();
        }
    }

    private void Respawn()
    {
        transform.position = respawnPoint.position + Vector3.up * 0.06f;
        _animatorController.PlayRespawn();
        AudioManager.Instance.PlaySFX("Respawn");

        GameObject particleInstance = Instantiate(_respawnParticlePrefab, transform.position + Vector3.up * 1.4f, Quaternion.identity);
        Destroy(particleInstance, 2f);
    }
}
