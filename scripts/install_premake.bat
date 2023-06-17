@echo off

set url="https://github.com/premake/premake-core/releases/download/v5.0.0-beta2/premake-5.0.0-beta2-src.zip"
set "destination=%~dp0\..\vendor"
set "tools_folder=%~dp0\..\installs\.tools"
set "zip_file=%tools_folder%\premake5.zip"

if not exist "%tools_folder%" (
    echo Creating .tools folder
    mkdir "%tools_folder%"
)

if not exist "%zip_file%" (
    echo Downloading zip file from %url%
    wget %url% -O "%zip_file%"

    echo Unpacking zip file into %destination%
    powershell -Command "Expand-Archive -Path "%zip_file%" -DestinationPath "%destination%""
) else (
    echo Zip file already exists in .tools folder. Skipping download.
)

echo renaming the output folder

ren "%destination%\premake-5.0.0-beta2-src" "premake5"

echo building premake

pushd "~dp0\..\vendor\premake5"
"C:\program files (x86)\microsoft visual studio\2019\community\Common7\Tools\VsDevCmd"
call nmake -f Bootstrap.mak windows
popd
echo Done!
