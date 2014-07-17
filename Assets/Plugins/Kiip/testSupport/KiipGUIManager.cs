using UnityEngine;
using System.Collections.Generic;



public class KiipGUIManager : MonoBehaviour
{
#if UNITY_ANDROID || UNITY_IPHONE
	void OnGUI()
	{
		float yPos = 5.0f;
		float xPos = 5.0f;
		float width = ( Screen.width >= 960 || Screen.height >= 960 ) ? 320 : 160;
		float height = ( Screen.width >= 960 || Screen.height >= 960 ) ? 80 : 40;
		float heightPlus = height + 10.0f;
	
	
		if( GUI.Button( new Rect( xPos, yPos, width, height ), "Save Moment" ) )
		{
			Kiip.saveMoment( "my-moment-id" );
		}
	
		
		if( GUI.Button( new Rect( xPos, yPos += heightPlus, width, height ), "Save Another Moment" ) )
		{
			Kiip.saveMoment( "moment-of-inertia" );
		}
		
	
		if( GUI.Button( new Rect( xPos, yPos += heightPlus, width, height ), "Save Moment with Value" ) )
		{
			Kiip.saveMoment( "another-moment-id", 45 );
		}
	
	
		if( GUI.Button( new Rect( xPos, yPos += heightPlus, width, height ), "Set Kiip Properties" ) )
		{
			Kiip.instance.gender = "Male";
			Kiip.instance.birthday = System.DateTime.Now;
			Kiip.instance.email = "someemail@email.net";
			
			// these next two are iOS only
			Kiip.instance.interfaceOrientation = DeviceOrientation.LandscapeLeft;
			Kiip.instance.shouldAutoRotate = true;
		}
	}
#endif
}
