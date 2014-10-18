// Fun.h : Declaration of the CFun

#ifndef __FUN_H_
#define __FUN_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFun
class ATL_NO_VTABLE CFun : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFun, &CLSID_Fun>,
	public IDispatchImpl<IFun, &IID_IFun, &LIBID_SIMPLE1Lib>
{
public:
	CFun()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FUN)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFun)
	COM_INTERFACE_ENTRY(IFun)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IFun
public:
};

#endif //__FUN_H_
