pushd %~dp0

zzzAtlServer.exe /UnregServer
regsvr32 /u zzzAtlServerPS.dll

popd