# UnityGraphics

This is a combination of SaltyNX plugin and Tesla overlay that allows to modify in real time graphics settings in games using Unity engine.

![screen](https://github.com/masagrator/UnityGraphics/blob/master/Screen.jpg?raw=true)

Requirements:
- Atmosphere (This is related to dmnt:cht that allows homebrews for reading build_id of running games. SX OS doesn't provide this info). Not tested on ReinX
- Tesla environment
- SaltyNX
- File with offsets dedicated to game (you can find storage here: https://github.com/masagrator/UnityGraphicsWarehouse)

---

For now UnityGraphics supports only:
- Quality category excluding:

-- `shadowCascade4Split_Injected` (requires using Vector3 struct)

-- `QualityLevel` (they are just profiles and cannot be used to bring default settings, so I don't bother with implementing it). I'm not implementing functions that doesn't have "set" counterpart.

- SetResolution from Screen category



To learn what each setting does read Unity documentation. Be aware that game may use different Unity version. You can change version in left upper corner.

https://docs.unity3d.com/2019.3/Documentation/Manual/class-QualitySettings.html

You can disable plugin when no game is running. Just open overlay and deactivate plugin. It is recommended to deactivate it when not running Unity game as some games can crash at boot for some unknown reason (f.e. Paper Mario).

Planned:
- Add save/load configurations
- Add more settings and categories
- Support more games

---

# This tool is for advanced users.

# Changing any setting can result in crashing game or showing unexpected bugs. 

# I don't take any responsibility for damage it can provide. 

# You're using it at your own risk.
