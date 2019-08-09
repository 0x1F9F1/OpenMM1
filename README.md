# OpenMM1

[![Build status](https://ci.appveyor.com/api/projects/status/61emkjr3xrxngjke/branch/master?svg=true)](https://ci.appveyor.com/project/0x1F9F1/openmm1/branch/master)
[![Chat On Discord](https://img.shields.io/badge/chat-on%20discord-7289DA?logo=discord)](https://discord.gg/ykT7PT4)

OpenMM1 is an open source re-implementation of Midtown Madness 1.

This project is a bottom-up rewrite of Midtown Madness 1, using the original binary to provide functions that have not been implemented yet.<br/>
The intention is to allow the fixing of bugs, implementation of new features and porting to platforms unsupported by the original.<br/>

## Installation
1. Download and install the [Visual C++ 2017 Redistributable](https://go.microsoft.com/fwlink/?LinkId=746571).
2. Download the [Latest Version](https://ci.appveyor.com/api/projects/0x1F9F1/OpenMM1/artifacts/build/OpenMM1.zip?branch=master) and extract the files directly into your MM1 directory.
3. Download [dgVoodoo 2](http://www.dege.freeweb.hu/dgVoodoo2/dgVoodoo2.html) and extract `DDraw.dll` and `D3DImm.dll` from `MS/x86` into your MM1 directory.
4. To play, run `OpenMM1.exe`

## Compatibility
* Although not required, it is recommended to use `OpenMM1.exe` instead of the original `midtown.exe`.
* OpenMM1 is intended to run on modern hardware, using `dgVoodoo 2`.
* OpenMM1 requires the original release (`Angel: 1588 / Apr 14 1999 15:07:10`, `1,927 KB`), not the XP patch (`Angel: 1589 / Sep 16 1999 11:00:21`, `1,959 KB`).
    * To verify your game verison, press `Ctrl+Shift+V` ingame and look at the top-left of the screen.
    * Alternatively, search for `Angel:` inside of `midtown.exe` using a hex-editor.

## dgVoodoo Settings
For the best experience, it is recommended to use the following settings in dgVoodoo:
* General:
    * Adapter(s) to use/enable: \<Your Main GPU>
    * Appearance: Windowed
* DirectX:
    * Resolution: \<Your Native Resolution>

## Troubleshooting
* `A '...' video board was found but is not supported because it <...>`:
    * `dgVoodoo 2` is missing or incorrectly installed. See [Installation](#Installation).
* `Invalid MM1 Version Detected`:
    * You are using an incorrect version of Midtown Madness 1. See [Compatibility](#Compatibility).
* `Login with administrator privileges and try again`:
    * Your OS doesn't support SafeDisc. See [Compatibility](#Compatibility).
* `Click OK to have Midtown Madness detect the presense of a hardware accelerator card`:
    * If happening every launch, rename `midtown.exe` to something else (e.g. `midtown1.exe`).
