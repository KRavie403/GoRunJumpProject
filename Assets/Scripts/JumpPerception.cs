using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class JumpPerception : MonoBehaviour
{
    [SerializeField] private AnimatorController _animatorController;

    [SerializeField] private float _jumpForce = 50f;

    private Rigidbody _rigidbody;

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _rigidbody.useGravity = false;
    }

    private void OnCollisionEnter(Collision collision)
    {

        Debug.Log("Collided with: " + collision.gameObject.name + ", Layer: " + LayerMask.LayerToName(collision.gameObject.layer));
        // Player ���̾�� �浹���� �� �ִϸ��̼� ����
        if (collision.gameObject.layer == LayerMask.NameToLayer("Jump"))
        {
            _animatorController.PlayJump();
            _rigidbody.AddForce(Vector3.up * _jumpForce * 1.7f, ForceMode.Impulse);
            AudioManager.Instance.PlaySFX("Jump");
        }
    }

}
