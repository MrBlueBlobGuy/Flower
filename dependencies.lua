include_dirs = {}
-- include directories
include_dirs["GLFW"] = "%{wks.location}/flower/vendor/GLFW/include"
include_dirs["GLAD"] = "%{wks.location}/flower/vendor/GLAD/include"

-- library directories
lib_dirs = {}

-- libraries
Library = {}

-- Windows
Library["WinSock"] = "Ws2_32.lib"
Library["WinMM"] = "Winmm.lib"
Library["WinVersion"] = "Version.lib"
Library["BCrypt"] = "Bcrypt.lib"