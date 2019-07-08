@echo OFF
set CUR_PATH=%~dp0

set NDK_PATH=d:\Project\DHC\trunk\Engine\Tools\AndroidNdk
set SOURCE_PATH=%CUR_PATH%CppSrc
set FBUILD_CONFIG=%CUR_PATH%FbuildConfig\fbuild.bff
set FBUILD_EXE=%CUR_PATH%FastBuild\FBuild.exe
echo %FBUILD_CONFIG%
call %FBUILD_EXE% -config %FBUILD_CONFIG%

pause