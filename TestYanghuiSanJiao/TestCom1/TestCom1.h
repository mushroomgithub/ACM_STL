/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Sep 10 20:25:24 2014
 */
/* Compiler settings for E:\MFCÁ·Ï°\TestCom1\TestCom1.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TestCom1_h__
#define __TestCom1_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IFun_FWD_DEFINED__
#define __IFun_FWD_DEFINED__
typedef interface IFun IFun;
#endif 	/* __IFun_FWD_DEFINED__ */


#ifndef __Fun_FWD_DEFINED__
#define __Fun_FWD_DEFINED__

#ifdef __cplusplus
typedef class Fun Fun;
#else
typedef struct Fun Fun;
#endif /* __cplusplus */

#endif 	/* __Fun_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IFun_INTERFACE_DEFINED__
#define __IFun_INTERFACE_DEFINED__

/* interface IFun */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IFun;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5E06306-1ACF-414F-AF62-C78CE09898E9")
    IFun : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ long n1,
            /* [in] */ long n2,
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Cat( 
            /* [in] */ BSTR s1,
            /* [in] */ BSTR s2,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFunVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFun __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFun __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFun __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IFun __RPC_FAR * This,
            /* [in] */ long n1,
            /* [in] */ long n2,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cat )( 
            IFun __RPC_FAR * This,
            /* [in] */ BSTR s1,
            /* [in] */ BSTR s2,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        END_INTERFACE
    } IFunVtbl;

    interface IFun
    {
        CONST_VTBL struct IFunVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFun_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFun_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFun_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFun_Add(This,n1,n2,pVal)	\
    (This)->lpVtbl -> Add(This,n1,n2,pVal)

#define IFun_Cat(This,s1,s2,pVal)	\
    (This)->lpVtbl -> Cat(This,s1,s2,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFun_Add_Proxy( 
    IFun __RPC_FAR * This,
    /* [in] */ long n1,
    /* [in] */ long n2,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IFun_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFun_Cat_Proxy( 
    IFun __RPC_FAR * This,
    /* [in] */ BSTR s1,
    /* [in] */ BSTR s2,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IFun_Cat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFun_INTERFACE_DEFINED__ */



#ifndef __TESTCOM1Lib_LIBRARY_DEFINED__
#define __TESTCOM1Lib_LIBRARY_DEFINED__

/* library TESTCOM1Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TESTCOM1Lib;

EXTERN_C const CLSID CLSID_Fun;

#ifdef __cplusplus

class DECLSPEC_UUID("AF8D0082-7BF9-4038-89ED-AA796F0EFEF1")
Fun;
#endif
#endif /* __TESTCOM1Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
