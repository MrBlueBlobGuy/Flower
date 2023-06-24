include_dirs = {}
-- include directories
include_dirs["GLFW"] = "%{wks.location}/flower/vendor/GLFW/include"
include_dirs["GLAD"] = "%{wks.location}/flower/vendor/GLAD/include"
include_dirs["GLM"] = "%{wks.location}/flower/vendor/glm"

-- library directories
lib_dirs = {}

-- libraries
Library = {}

-- Windows
Library["WinSock"] = "Ws2_32.lib"
Library["WinMM"] = "Winmm.lib"
Library["WinVersion"] = "Version.lib"
Library["BCrypt"] = "Bcrypt.lib"