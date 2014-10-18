// Fun.cpp : Implementation of CFun
#include "stdafx.h"
#include "TestCom1.h"
#include "Fun.h"

/////////////////////////////////////////////////////////////////////////////
// CFun


STDMETHODIMP CFun::Add(long n1, long n2, long *pVal)
{
	// TODO: Add your implementation code here
	*pVal=n1+n2;
	return S_OK;
}

STDMETHODIMP CFun::Cat(BSTR s1, BSTR s2, BSTR *pVal)
{
	// TODO: Add your implementation code here
	/*CComBSTR sResult(s1);
	sResult.AppendBSTR(s2);
	*pVal=sResult.Copy();*/
	int nLen1=::SysStringLen(s1);//s1的字符长度
	int nLen2=::SysStringLen(s2);//s2的字符长度
	*pVal=::SysAllocStringLen(s1,nLen1+nLen2);//构造新的 BSTR 同时把 s1 先保存进去
	if(nLen2)
	{
		::memcpy(*pVal+nLen1,s2,nLen2*sizeof(WCHAR));
		//wcscat(*pVal,s2);//没有memcpy这种方法好
	}
	return S_OK;
}
