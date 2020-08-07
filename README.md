# Adquire the plugin in UE4 Marketplace!
https://www.unrealengine.com/marketplace/en-US/product/c-hot-reload

# C++ Hot Reload for Unreal Engine 4
C++ Hot Reload is a plugin that allows the Unreal Editor to detect modified **classes** and build them automatically in background allowing you to **modify the headers files and the classes structures** for Windows and macOS. C++ Hot Reload will only build the modified files to speed up your work in large projects or plugins. 

**You know the plugin is installed when you see in your tool bar the following similar image**
![Image of Status button](https://github.com/CppHotReload/UE4/blob/master/images/toolbar.jpg?raw=true)

[![RESUME](https://j.gifs.com/p8D3ON.gif)](https://www.youtube.com/watch?v=_k5E0Fh5lJo)
### https://www.hotreload.tech

# Support
* UE4.23, UE4.24 and UE4.25
* Reload header files
* No matter how big is your project, you'll reload only the modified files
* Supports macOS and Windows using 64bits
* PCH based for fast reload, even .h files changing the classes layouts it's able to reload in the gap of seconds
* See how to speed up macOS builds (~40%) in the section below

## Installation
1. Install the plugin using the UE marketplace
2. The plugin will auto-configure it self with your target project
3. Recommendation: deactivate Edit and Continue in Visual Studio: https://docs.microsoft.com/en-us/visualstudio/debugger/edit-and-continue-visual-cpp?view=vs-2019

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
* v0.9.98.3 - Multi-thread compilation for macOS (huge speed up) and Win64 (not much speed up)
* v0.9.98 - Multi-thread processing of files for non-blocking loading 
* v0.9.97 - Speed up reload time to only 2 seconds using PCH and macOS support: https://www.youtube.com/watch?v=461sRJIhvh4
* v0.9.96 - Change Class Structure UProperty: https://www.youtube.com/watch?v=y-cGRAY0OLY
* v0.9.96 - Reload NON UProperty, private variables: https://www.youtube.com/watch?v=G9WnryVNDDA

# Test projects

## UE4 classes tested here
Enter in the Discord channel and send your sample class to get support!
* ActorComponent
* SceneComponent

## 1000 simple components
Test machine for Win64: Corei7-4790 3.6 GHz, 3601 Mhz, 4 Cores - SSD 860 EVO
Test machine for macOS: MBP 2018, Corei7 2.6 Ghz, 6 Cores - SSD
Located in: https://github.com/CppHotReload/UE4/tree/master/samples/Projects/Shooter%20-%20Test
```cpp
//
// Test "1000 simple components", without dependencies or dependents
//

// Modifying a CPP file
1st change, Win64: UE4 11.5s vs 3.0s | macOS: 35.2s vs 9.0s
2nd change, Win64: UE4 10.5s vs 3.3s | macOS: 50.9s vs 8.6s
3rd change, Win64: UE4 12.5s vs 3.1s | macOS: 45.3s vs 8.3s

// Modifying a H file. + correspond to Unreal Header Tool
1st change, Win64: UE4 45.6s vs 3.3s + 29s | macOS: 102.9s vs  9.2s + 10s
2nd change, Win64: UE4 22.4s vs 3.5s + 10s | macOS:  70.3s vs  9.9s + 9s
3rd change, Win64: UE4 22.0s vs 3.4s + 7s  | macOS:  65.9s vs 10.2s + 9s

```
![macOSv0.9.98.3](https://github.com/CppHotReload/UE4/raw/master/images/macOSv0.9.98.3.png)

# About macOS
* If you need to generate debug symbols to better inspection, go to the file CppHotReloadConfig.h and set CPP_HOT_RELOAD_SPEED_UP_ON_MACOS to 0

