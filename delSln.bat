del /f /s /q %~dp0.vs\*.*
rd /s /q %~dp0.vs
del /f /s /q %~dp0bin\*.*
rd /s /q %~dp0bin
del /f /s /q %~dp0bin-int\*.*
rd /s /q %~dp0bin-int

del  /f /s /q %~dp0Meow.Core\Meow.Core.vcxproj
del  /f /s /q %~dp0Meow.Core\Meow.Core.vcxproj.filters
del  /f /s /q %~dp0Meow.Core\Meow.Core.vcxproj.user

del  /f /s /q %~dp0Meow.Sandbox\Meow.Sandbox.vcxproj
del  /f /s /q %~dp0Meow.Sandbox\Meow.Sandbox.vcxproj.filters
del  /f /s /q %~dp0Meow.Sandbox\Meow.Sandbox.vcxproj.user

del  /f /s /q %~dp0Meow.sln

PAUSE