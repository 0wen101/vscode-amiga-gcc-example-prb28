
VS Code Amiga GCC Example
===

This is a fork of Pain Raingeard's (PRB28) [Workspace](https://github.com/prb28/vscode-amiga-gcc-example) with details on how to setup, build and debug C programs with Bebbo's [amiga-gcc](https://github.com/bebbo/amiga-gcc) build tools/toolchain.

As in PRB28's workspace, a Makefile approach is used to compile amiga executables on Windows, run in WinUAE and do *light* source level debugging via gcc debugger and server running on the emulated amiga in WinUAE.<br>Later the same setup is used for another [project](https://github.com/0wen101/vscode-amiga-gcc-ACE-helloworld) using ACE (Amiga C Engine).

It's aimed at beginners - enough to get the basics working without spending too much time configuring or troubleshooting. <br>There is no need to install and configure WinUAE - it's all provided and integrated with the VS Code plugin.

Worth noting there are other cross compile setups using more recent versions of GCC than Bebbos 6.5 e.g. [BartmanAbyss](https://github.com/BartmanAbyss/vscode-amiga-debug).
<BR>Bebbos GCC is interesting however as you can build and compile Standard C Library code fairly easily. <br>There are though some significant limitations:

- no debugging of static, dynamic or ROM resident libraries
- no debugging when OS is disabled
- variables watch not working sometimes
- bgdbserver not being very robust, becomes unresponsive regularly

That being said, you can still set breakpoints & stop running Amiga code at source code level in VS Code, step through code and watch (some) variables in a nice, clean, modern code editor.

Refer to docs for setup and build instructions 

1. [install](docs/1.install.md)<br>
2. [workspace](docs/2.workspace.md)<br>
3. [compile](docs/3.Compile.md)<br>
4. [run](docs/4.Run.md)<br>
5. [debugging](docs/5.Debugging.md)<br>
6. [issues](docs/6.Issues.md)<br>
<br>
<br>


![alt text](docs/images/hello.gif "debugging")
