using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private bl_Joystick _joystick;

    [SerializeField] private AnimatorController _animatorController;

    [SerializeField] private float _moveSpeed;
    [SerializeField] private float _rotateSpeed;
    [SerializeField] private float _jumpForce = 50f;
    [SerializeField] private float _customGravity = 50f;
    [SerializeField] private float _rotationSpeed = 50f;

    private Rigidbody _rigidbody;

    private Vector3 _moveVector;

    private bool isFalling = false;
    private bool isJumping = false;

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _rigidbody.useGravity = false;
    }

    private void Update()
    {
        Move();
        if (isAttached)
        {
            transform.parent.Rotate(Vector3.up * _rotationSpeed * Time.deltaTime, Space.World);
        }
    }


    private void Move()
    {
        _moveVector = Vector3.zero;
        _moveVector.x = _joystick.Horizontal * _moveSpeed * Time.deltaTime;
        _moveVector.z = _joystick.Vertical * _moveSpeed * Time.deltaTime;

        isFalling = _rigidbody.velocity.y < -1f;

        if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
        {
            Vector3 direction = Vector3.RotateTowards(transform.forward, _moveVector, _rotateSpeed * Time.deltaTime, 0.0f);
            transform.rotation = Quaternion.LookRotation(direction);

            if (transform.position.y > 1.6f && isFalling)
            {
                _animatorController.PlayFall1();
            }
            else
            {
                _animatorController.PlayRun();
                //AudioManager.Instance.PlaySFX("Run ");
            }
        }



        else if(_joystick.Horizontal == 0 && _joystick.Vertical == 0)
        {
            if (transform.position.y > 1.6f && isFalling)
            {
                _animatorController.PlayFall1();
            }
            else
            {
                _animatorController.PlayIdle();
            }
        }

        _rigidbody.MovePosition(_rigidbody.position + _moveVector);
        _rigidbody.AddForce(Vector3.down * _customGravity * _rigidbody.mass);

    }

    public void Jump()
    {
        if (!isJumping)
        {
            _animatorController.PlayJump();
            _rigidbody.AddForce(Vector3.up * _jumpForce, ForceMode.Impulse);
            isJumping = true;
            AudioManager.Instance.PlaySFX("Jump");
        }
    }

    private void OnCollisionEnter(Collision collision)
    {

        Debug.Log("Collided with: " + collision.gameObject.name + ", Layer: " + LayerMask.LayerToName(collision.gameObject.layer));
        if (collision.gameObject.layer == LayerMask.NameToLayer("Ground") || 
            collision.gameObject.layer == LayerMask.NameToLayer("EndPoint"))
        {
            isJumping = false;
        }
    }

    private bool isAttached = false;

    private void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.layer == LayerMask.NameToLayer("Bowl"))
        {
            isAttached = true;
            transform.parent = collision.transform;
        }
    }
}
