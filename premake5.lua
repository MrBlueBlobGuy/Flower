include "dependencies.lua"

workspace "Flower"
	architecture "x86_64"
	startproject "Petal"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
	--include "vendor/premake5"
	include "Flower/vendor/GLFW"
	include "Flower/vendor/Glad"
	include "Flower/vendor/glm"
	include "Flower/vendor/NumCpp"
group ""

group "Core"
	include "Flower"
group ""

group "Tools"
	include "Petal"
group ""