

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for zzzAtlServer.idl:
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

#ifndef __zzzAtlServer_i_h__
#define __zzzAtlServer_i_h__

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

#ifndef __IzzzObject_FWD_DEFINED__
#define __IzzzObject_FWD_DEFINED__
typedef interface IzzzObject IzzzObject;

#endif 	/* __IzzzObject_FWD_DEFINED__ */


#ifndef __zzzObject_FWD_DEFINED__
#define __zzzObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class zzzObject zzzObject;
#else
typedef struct zzzObject zzzObject;
#endif /* __cplusplus */

#endif 	/* __zzzObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IzzzObject_INTERFACE_DEFINED__
#define __IzzzObject_INTERFACE_DEFINED__

/* interface IzzzObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IzzzObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fd48b375-0467-4ce6-9940-b06b63578c43")
    IzzzObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Test( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IzzzObjectVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IzzzObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IzzzObject * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IzzzObject * This);
        
        DECLSPEC_XFGVIRT(IzzzObject, Test)
        HRESULT ( STDMETHODCALLTYPE *Test )( 
            IzzzObject * This);
        
        END_INTERFACE
    } IzzzObjectVtbl;

    interface IzzzObject
    {
        CONST_VTBL struct IzzzObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IzzzObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IzzzObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IzzzObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IzzzObject_Test(This)	\
    ( (This)->lpVtbl -> Test(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IzzzObject_INTERFACE_DEFINED__ */



#ifndef __zzzAtlServerLib_LIBRARY_DEFINED__
#define __zzzAtlServerLib_LIBRARY_DEFINED__

/* library zzzAtlServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_zzzAtlServerLib;

EXTERN_C const CLSID CLSID_zzzObject;

#ifdef __cplusplus

class DECLSPEC_UUID("8e0b88ca-8b91-428a-98ee-295081f20e71")
zzzObject;
#endif
#endif /* __zzzAtlServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


