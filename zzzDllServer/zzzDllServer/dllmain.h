// dllmain.h : Declaration of module class.

class CzzzDllServerModule : public ATL::CAtlDllModuleT< CzzzDllServerModule >
{
public :
	DECLARE_LIBID(LIBID_zzzDllServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ZZZDLLSERVER, "{c88a791c-87ac-47e2-b69f-77b75bd3683f}")
};

extern class CzzzDllServerModule _AtlModule;
