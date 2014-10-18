// Fun.h : Declaration of the CFun

#ifndef __FUN_H_
#define __FUN_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFun
class ATL_NO_VTABLE CFun : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFun, &CLSID_Fun>,
	public IFun
{
public:
	CFun()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FUN)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFun)
	COM_INTERFACE_ENTRY(IFun)
END_COM_MAP()

// IFun
public:
	STDMETHOD(Cat)(/*[in]*/ BSTR s1,/*[in]*/ BSTR s2,/*[out,retval]*/ BSTR* pVal);
	STDMETHOD(Add)(/*[in]*/ long n1,/*[in]*/ long n2,/*[out,retval]*/ long* pVal);
};

#endif //__FUN_H_
