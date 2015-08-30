# Kiip Unity Wrapper

## Integration instructions for an existing project

- Import the unitypackage into your project
- Drag the Kiip prefab into your loading scene (this should be placed in a scene that is only visited once so that only one will ever exist)
- Configure your Kiip application information in the inspector for the Kiip GameObject
- Start calling any methods on the Kiip class wherever relevant for your game
- (Android only) before building your apk select the "Generate AndroidManifest.xml file" from the Kiip menu to create an AndroidManifest.xml file

## Integration instructions for testing the demo scene

- Import the unitypackage into your project
- Open the KiipTestScene in Unity
- Configure your Kiip application information in the inspector for the Kiip GameObject
- (Android only) before building your apk select the "Generate AndroidManifest.xml file" from the Kiip menu to create an AndroidManifest.xml file
- Build and run on your device and watch the logs for relevant information


## Properties

    public bool shouldAutoRotate
    public DeviceOrientation interfaceOrientation
    public string email
    public string gender
    public DateTime birthday

## Methods

    public static void saveMoment( string momentId )
    public static void saveMoment( string momentId, double val )
    public static void showPoptart() #iOS Only