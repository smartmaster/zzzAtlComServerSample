

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for zzzDllServer.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __zzzDllServer_i_h__
#define __zzzDllServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IzzzDllObj_FWD_DEFINED__
#define __IzzzDllObj_FWD_DEFINED__
typedef interface IzzzDllObj IzzzDllObj;

#endif 	/* __IzzzDllObj_FWD_DEFINED__ */


#ifndef __zzzDllObj_FWD_DEFINED__
#define __zzzDllObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class zzzDllObj zzzDllObj;
#else
typedef struct zzzDllObj zzzDllObj;
#endif /* __cplusplus */

#endif 	/* __zzzDllObj_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IzzzDllObj_INTERFACE_DEFINED__
#define __IzzzDllObj_INTERFACE_DEFINED__

/* interface IzzzDllObj */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IzzzDllObj;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20a1525c-c8ac-435b-802e-6cc0ee501cc4")
    IzzzDllObj : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Test( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IzzzDllObjVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IzzzDllObj * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IzzzDllObj * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IzzzDllObj * This);
        
        DECLSPEC_XFGVIRT(IzzzDllObj, Test)
        HRESULT ( STDMETHODCALLTYPE *Test )( 
            IzzzDllObj * This);
        
        END_INTERFACE
    } IzzzDllObjVtbl;

    interface IzzzDllObj
    {
        CONST_VTBL struct IzzzDllObjVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IzzzDllObj_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IzzzDllObj_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IzzzDllObj_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IzzzDllObj_Test(This)	\
    ( (This)->lpVtbl -> Test(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IzzzDllObj_INTERFACE_DEFINED__ */



#ifndef __zzzDllServerLib_LIBRARY_DEFINED__
#define __zzzDllServerLib_LIBRARY_DEFINED__

/* library zzzDllServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_zzzDllServerLib;

EXTERN_C const CLSID CLSID_zzzDllObj;

#ifdef __cplusplus

class DECLSPEC_UUID("fab0757f-d802-4b6b-be4b-ec0542af1912")
zzzDllObj;
#endif
#endif /* __zzzDllServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


