using UnityEngine;

public class CameraControls : MonoBehaviour
{
    public Vector3 initialFocusPoint;

    [Header("Zoom & Rotation")]
    public float distance;
    public float zoomSpeed = 5f;
    public float rotationSpeed = 10f;
    public float panSpeed = 0.5f;
  

    [Header("Focus")]
    private Vector3 focusPoint;
    private float yaw;
    private float pitch = 90f;
    private bool freeModeEnabled = false;

   void Start()
    {
        focusPoint = initialFocusPoint;
        SetCameraView(0);
    }

    void Update()
    {
        if (freeModeEnabled)
        {
            HandleRotation();
            HandlePan();
            HandleZoom();
            UpdateCameraPosition();

        }
        
    }

    private void HandleRotation()
    {
        if (Input.GetMouseButton(1)) // 1 = Right-click 
        {
            float mouseX = Input.GetAxis("Mouse X");
            float mouseY = Input.GetAxis("Mouse Y");

            yaw += mouseX * rotationSpeed;
            pitch -= mouseY * rotationSpeed;
            pitch = Mathf.Clamp(pitch, 10f, 90f);
        }
    }

    private void HandlePan()
    {
        if (Input.GetMouseButton(2)) // 2 = Middle-click 
        {
            float panX = -Input.GetAxis("Mouse X") * panSpeed;
            float panY = -Input.GetAxis("Mouse Y") * panSpeed;

            Vector3 right = transform.right;
            Vector3 up = transform.up;

            focusPoint += right * panX + up * panY;
        }
    }

    private void HandleZoom()
    {
        float scroll = Input.GetAxis("Mouse ScrollWheel");
        distance -= scroll * zoomSpeed;
        distance = Mathf.Clamp(distance, 5f, 50f);
    }

    private void UpdateCameraPosition()
    {
        Quaternion rotation = Quaternion.Euler(pitch, yaw, 0f);
        Vector3 offset = rotation * new Vector3(0, 0, -distance);
        transform.position = focusPoint + offset;
        transform.rotation = rotation;
    }

    public void SetCameraView(int viewIndex)
    {
        freeModeEnabled = (viewIndex == 2); 

        if (viewIndex == 0) // Top-down view
        {
            yaw = 0f;
            pitch = 90f;
            distance = 20f;
            
        }
        else if (viewIndex == 1) // Side view
        {
            yaw = 0f;
            pitch = 45f;
            distance = 20f;
            
        }
        else if (viewIndex == 2) // Angled view
        {
            yaw = 45f;
            pitch = 45f;
            distance = 20f;
            
        }

        UpdateCameraPosition();
        focusPoint = initialFocusPoint;
    }
}
