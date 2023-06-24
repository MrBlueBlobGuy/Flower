project "Flower"
    language "C++"
    kind "StaticLib"
    staticruntime "off"
    cppdialect "C++17"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

    defines "_SOLUTIONDIR='%{wks.location}'"
    defines "_CRT_SECURE_NO_WARNINGS"
    files {
        "src/**.cpp",
        "src/**.h"
    }

    includedirs{
        "src", 
        "%{include_dirs.GLFW}",
        "%{include_dirs.GLAD}",
        "%{include_dirs.GLM}"
    }

    links{
        "GLFW",
        "GLAD",
        "GLM"
    }

    filter "system:windows"
        defines {}
        links{
            "%{Library.WinSock}",
			"%{Library.WinMM}",
			"%{Library.WinVersion}",
			"%{Library.BCrypt}",
        }

    filter "configurations:Debug"
        defines "FL_DEBUG"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines "FL_RELEASE"
        runtime "Release"
        optimize "on"

    filter "configurations:Dist"
        defines "FL_DIST"
        runtime "Release"
        optimize "on"