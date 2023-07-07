project "Flower"
    language "C++"
    kind "StaticLib"
    staticruntime "off"
    cppdialect "C++17"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

    defines 'WORKING_DIR="$(SolutionDir)/Flower/resources"'
    defines "_CRT_SECURE_NO_WARNINGS"
    files {
        "src/flower/**.cpp",
        "src/flower/**.h",
        "assets/flower/**.glsl",
        "assets/flower/**.hlsl",
        "assets/flower/**.shader",
        "assets/flower/**.frag",
        "assets/flower/**.vert",
        "assets/flower/**.vs",
        "assets/flower/**.fs"
    }
    includedirs{
        "src", 
        "%{include_dirs.GLFW}",
        "%{include_dirs.GLAD}",
        "%{include_dirs.GLM}",
        "%{include_dirs.NumCpp}"
    }
    links{
        "GLFW",
        "GLAD"
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