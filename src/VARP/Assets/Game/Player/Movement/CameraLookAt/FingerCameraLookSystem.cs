using Meta;
using UnityEngine;

namespace Game.Player.Movement.CameraLookAt
{
    public class FingerCameraLookSystem : ILateExecuteSystem
    {
        private Contexts _contexts;
        private Touch _lastTouch;
        private Vector3 _angle = Vector3.zero;
        private static float _halfScreenWidth => Screen.width / 2f;
        public FingerCameraLookSystem(Contexts contexts) => _contexts = contexts;
        
        public void LateExecute()
        {
             
            foreach (var touch in Input.touches)
            {
                if (touch.position.x < _halfScreenWidth)
                    continue;
                
                if (touch.phase == TouchPhase.Began)
                    _lastTouch = touch;

                if (touch.phase == TouchPhase.Moved)
                {
                    Vector2 sensitivity = _contexts.game.resources.Value.PlayerConfiguration.Sensitivity;
                    Transform camera = _contexts.game.camera.Value.transform;
                    float differenceX = touch.position.x - _lastTouch.position.x;
                    float differenceY = touch.position.y - _lastTouch.position.y;
                    
                    camera.Rotate(Vector3.up, differenceX * sensitivity.x);
                    camera.eulerAngles = new Vector3(camera.eulerAngles.x, camera.eulerAngles.y , 0);
                    Vector3 baseAngle = _angle;
                    
                    camera.transform.Rotate(Vector3.right, differenceY * sensitivity.y);
                    _angle.x += differenceY * sensitivity.y;
                    
                    if (_angle.x is > 90 or < -90)
                    {
                        camera.Rotate(Vector3.right, -(differenceY * sensitivity.y));
                        _angle.x -= differenceY * sensitivity.y;
                    }
                    _lastTouch = touch;
                }
                
                if (touch.phase == TouchPhase.Canceled || touch.phase == TouchPhase.Ended)
                    _lastTouch = new Touch();
                
            }
        }

    }
}