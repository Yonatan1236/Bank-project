-- premake5.lua
workspace "Bank"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "BankApp"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

group "BankTest"
	include "Bank-test/Build-BankTest.lua"

group "BankCore"
	include "Bank-core/Build-BankCore.lua"
group ""

include "Bank-app/Build-BankApp.lua"