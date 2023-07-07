project "Petal"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	    defines 'WORKING_DIR="$(SolutionDir)/Flower/resources"'

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	includedirs
	{
		"%{wks.location}/Flower/src",
		"%{wks.location}/Flower/vendor/GLFW/include",
		"%{wks.location}/Flower/vendor/GLAD/include"
	}

	links
	{
		"Flower"
	}

	filter "system:windows"
		systemversion "latest"

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