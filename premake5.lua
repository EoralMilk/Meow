workspace "Meow"
    architecture "x64"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
core_name = "Meow.Core"
sandbox_name = "Meow.Sandbox"

project "Meow.Core"
    location "Meow.Core"
    kind "SharedLib"
    language "C++"

    targetdir ("bin/"..outputdir.."/%{prj.name")
    objdir ("bin-int/"..outputdir.."/%{prj.name")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"

    }

    includedirs
    {
        "%{prj.name}/vendor/spdlog/include/"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines
        {
            "MW_PLATFORM_WINDOWS",
            "MW_BUILD_DLL"
        }

        postbuildcommands
        {
            ("{COPY} %{cfg.buildtarget.relpath} ../bin/" ..outputdir.."/"..sandbox_name)
        }

    filter "configurations:Debug"
        defines "MW_DEBUG"
        symbols "On"
    
    filter "configurations:Release"
        defines "MW_RELEASE"
        symbols "On"
    
    filter "configurations:Dist"
        defines "MW_DIST"
        symbols "On"

project "Meow.Sandbox"
    location "Meow.Sandbox"
    kind "ConsoleApp"
    language "C++"
    
    targetdir ("bin/"..outputdir.."/%{prj.name")
    objdir ("bin-int/"..outputdir.."/%{prj.name")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        core_name.."/vendor/spdlog/include/",
        core_name.."/src/"
    }

    links
    {
        core_name
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines
        {
            "MW_PLATFORM_WINDOWS",
        }

    filter "configurations:Debug"
        defines "MW_DEBUG"
        symbols "On"
    
    filter "configurations:Release"
        defines "MW_RELEASE"
        symbols "On"
    
    filter "configurations:Dist"
        defines "MW_DIST"
        symbols "On"