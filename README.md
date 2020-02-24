# C++ Hot Reload for Unreal Engine 4
C++ Hot Reload is a plugin that allows the Unreal Editor to detect modified **classes** and build them automatically allowing you to **modify the headers files and the classes structures** for Windows and macOS. C++ Hot Reload will only build the modified files to speed up your work in large projects or plugins. 

**You know the plugin is installed when you see in your tool bar the following similar image**

![Image of Status button](https://github.com/CppHotReload/UE4/blob/master/images/toolbar.jpg?raw=true)

# Support
* UE4.23 and UE4.24
* Supports macOS and Win64
   * Windows, testd on Visual Studio 2017 and 2019
   * macOS, Xcode latest version
* Only 64bits
* PCH based for fast reload, even .h files changing the classes layouts it's able to reload in the gap of 2 seconds

## Installation
* Install the plugin using the UE marketplace
* Tell C++ Hot Reload the name of your PCH file for faster builds
  * The default mode doesn't use PCH for compatibility.
  * However **if you want to reload your files in the gap of a couple of seconds** modify CppHotReloadConfig.h 
  * Add the line #define CPP_HOT_RELOAD_PCH_NAME "Test.h"
  * Change "Test.h" to fit what you has been defined as PrivatePCHHeaderFile in your game Build.cs. 
  * If you don't have that variable defined, add PrivatePCHHeaderFile = "NAME_OF_YOUR_PCH.h"; and use it in your source code

## Understanding the status bar 
* ![Image of waiting](https://github.com/CppHotReload/UE4/blob/master/images/ToolBar_Icon_40_waiting.png?raw=true) Waiting for the user save a file 
* ![Image of UE Header tool running](https://github.com/CppHotReload/UE4/blob/master/images/ToolBar_Icon_40_ue_tool.png?raw=true) Unreal Header Tool is running (when you modify a .h file)
* ![Image of NO PCH](https://github.com/CppHotReload/UE4/blob/master/images/ToolBar_Icon_40_no_pch_1.png?raw=true) You have no  PCH file configured for your project and files, the reload will be much slower
* ![Image of Building](https://github.com/CppHotReload/UE4/blob/master/images/ToolBar_Icon_40_1.png?raw=true) Building!

# Feedback and Help
![Image of Discord](https://discordapp.com/assets/e4923594e694a21542a489471ecffa50.svg)
https://discord.gg/9gsaNnD

For any other question: contact AT hotreload.tech or file an issue here in GitHub
# Videos
* What's C++ Hot Reload: https://www.youtube.com/watch?v=_k5E0Fh5lJo
* v0.9.97 - Speed up reload time to only 2 seconds using PCH and macOS support: https://www.youtube.com/watch?v=461sRJIhvh4
* v0.9.96 - Change Class Structure UProperty: https://www.youtube.com/watch?v=y-cGRAY0OLY
* v0.9.96 - Reload NON UProperty, private variables: https://www.youtube.com/watch?v=G9WnryVNDDA

