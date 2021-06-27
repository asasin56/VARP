using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public  static  class SmoothDampAdapter
{
    private static Vector2 _currentDeltaVelocity = Vector2.zero;  
    public static Vector2 SmoothDamp(this Vector2 vector2, Vector2 target, float smoothTime)
    {
        return Vector2.SmoothDamp(vector2, target, ref _currentDeltaVelocity, smoothTime); 
    }
}
