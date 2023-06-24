# Flower

## Building

Flower Engine uses "premake5" to generate build files. All of the code is written and built in Visual Studio 2019.

---

<ins> Downloading The Source </ins>

Clone the source code recusrively by using the --recursive flag

`git clone -- recursive https://github.com/MrBlueBlobGuy/Flower/` this will also clone all the submodules from the .gitmodules folder

---

prerequisites:

- Visual Studio 2019/2022
- git

---

<ins> Generating needed files</ins>

To generate build files run the following commands into command Prompt [ I tried powershell but it did not work ] (This assumes visual studio is installed with default configurations)

    C:\program files (x86)\microsoft visual studio\2019\community\Common7\Tools\VsDevCmd

    ./scripts/setup.bat
