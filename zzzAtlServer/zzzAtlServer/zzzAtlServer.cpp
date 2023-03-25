// zzzAtlServer.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "zzzAtlServer_i.h"


using namespace ATL;


class CzzzAtlServerModule : public ATL::CAtlExeModuleT< CzzzAtlServerModule >
{
public :
	DECLARE_LIBID(LIBID_zzzAtlServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ZZZATLSERVER, "{42e7811d-a647-4dae-9909-22cc30cb433d}")
};

CzzzAtlServerModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

