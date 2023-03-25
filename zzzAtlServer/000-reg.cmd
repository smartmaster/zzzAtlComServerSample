pushd %~dp0

zzzAtlServer.exe /RegServer
regsvr32 zzzAtlServerPS.dll

popd