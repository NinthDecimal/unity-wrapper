# Kiip Unity Wrapper

## Integration instructions for an existing project

- Import the unitypackage into your project
- Drag the Kiip prefab into your loading scene (this should be placed in a scene that is only visited once so that only one will ever exist)
- Configure your Kiip application information in the inspector for the Kiip GameObject
- Start calling any methods on the Kiip class wherever relevant for your game
- (Android only) before building your apk select the "Generate AndroidManifest.xml file" from the Kiip menu to create an AndroidManifest.xml file

## Integration instructions for testing the Kiip demo scene - Sample App

- Import the unitypackage into your project
- Open the KiipTestScene in Unity that's located under Assets/Plugins/Kiip/testSupport project directory
- Configure your Kiip application information (app key & secret) in the inspector for the Kiip GameObject that's located under Asset/Plugins/Kiip project directory
- (Android only) Before building your apk make sure that the AndroidManifest.xml file exist inside Assets/Plugins/Kiip
- Go to Build Settings under file menu and click on Add Open Scenes to select KiipTestScene
- Make sure you selected Android (or iOS) platform.
- Click on Player Settings and change Package Name to something unique (ex. me.kiip.sample)
- Click Build and Run to run on your device and watch the logs for relevant information


## Properties

    public bool shouldAutoRotate
    public DeviceOrientation interfaceOrientation
    public string email
    public string gender
    public DateTime birthday
    public bool testMode

## Methods

    public static void saveMoment( string momentId )
    public static void saveMoment( string momentId, double val )
    public static void showPoptart()
