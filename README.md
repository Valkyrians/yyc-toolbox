# YYC Toolbox

[![Join the Valkyrians discord server](https://img.shields.io/discord/1236119944714780672?label=Discord&logo=discord&logoColor=white)](https://discord.gg/FRgGkgUhRK)

# ⚠ YYC Toolbox is on a hiatus and has been superseded by GMSuite. Join the Discord server above for more information, updates and teasers.

Basically a YYC mod tool. This is very much a WIP and will take some time to finish.

## Feature/plans list

<table><tbody><tr><td><p>Feature</p></td><td><p>Status</p></td></tr><tr><td><p>Object editor</p></td><td><p>✅ Implemented</p></td></tr><tr><td><p>Code editor</p></td><td><p>✅ Implemented</p></td></tr><tr><td><p>Code decompiler</p></td><td><p>❌ Removed temporarily</p></td></tr><tr><td><p>Code executor</p></td><td><p>✅ Implemented</p></td></tr><tr><td><p>Resource browser</p></td><td><p>❓ Partially implemented</p></td></tr><tr><td><p>Font support</p></td><td><p>❌Planned</p></td></tr><tr><td><p>Patch generation</p></td><td><p>❌Planned</p></td></tr><tr><td><p>Code patching</p></td><td><p>❌Planned</p></td></tr><tr><td><p>Room editing</p></td><td><p>❌Planned</p></td></tr></tbody></table>

Code decompiler was removed due to ethical concerns from 1. GM datamining community 2. GM developer community.

For any potentially unimplemented features that you may need right now, we recommend you check out [UndertaleModTool](https://github.com/UnderminersTeam/UndertaleModTool), or [UnderAnalyzer](https://github.com/UnderminersTeam/Underanalyzer).

## Installation

Download the DLL from Releases and inject it using your injector of choice.

## FAQ

### How does YYC Toolbox work?

YYC Toolbox works by injecting itself into the game and accessing the internal Runner structure via signature scanning. It's very much similar to a game cheat, and that's by design. It makes it easier to use (you see your changes at runtime) and it's easier for me to access the game's code.

### Do you have a Lua API?

A half-baked Lua API with a documentation we barely update? [Coming right up!](https://docs.x64dbg.ru/home)

### When do you plan on finishing YYC Toolbox?

Probably after GMSuite. It could be included within it as a tool.

### Can I use x from YYC Toolbox?

You may use any of the code from YYC Toolbox as long as you credit this repository in some-way (I.E. link in README or a fork). This project is licensed under the terms of the [GNU GPL-3.0](https://www.gnu.org/licenses/gpl-3.0.html) license.

### How do I know when x happens?

Discord server. Link can be found at the beginning of this README.

## Credits

[Archie](https://github.com/Archie-osu), for sharing some internal structs and knowledge he had from making [YYToolkit](https://github.com/AurieFramework/YYToolkit).

[maecry](https://github.com/maecry) and [Exlodium](https://github.com/Exlodium), for coding some very useful utilities used in this project, such as `crt.h`, `detourhook.h`, etc.

[James](https://github.com/septumfunk), for being a cool friend and helping with figuring some stuff out.

[omar](https://github.com/ocornut), for developing the masterpiece that ImGui is (a little bit of glaze never hurt anybody)

[Lartu](https://github.com/Lartu), for making [cppregex](https://github.com/Lartu/cppregex).

[yhirose](https://github.com/yhirose), for making [cpp-httplib](https://github.com/yhirose/cpp-httplib).

And all the anonymous beta testers, too. DM me if you want to be listed here.
