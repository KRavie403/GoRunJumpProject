using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockMovement1 : MonoBehaviour
{
    [SerializeField] private float _translationSpeed = 10f;
    private Vector3[] directions = { Vector3.right, Vector3.up, Vector3.left, Vector3.down };
    private int currentDirectionIndex = 0;
    private float distanceToMove = 50f;
    private Vector3 initialPosition;

    private void Update()
    {
        float distanceThisFrame = _translationSpeed * Time.deltaTime;
 
        transform.Translate(directions[currentDirectionIndex] * distanceThisFrame);

        distanceToMove -= distanceThisFrame;

        if (distanceToMove <= 0f)
        {
            currentDirectionIndex = (currentDirectionIndex + 1) % directions.Length;
            distanceToMove = 50f;
        }
    }
}
