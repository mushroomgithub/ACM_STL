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
	int nLen1=::SysStringLen(s1);//s1���ַ�����
	int nLen2=::SysStringLen(s2);//s2���ַ�����
	*pVal=::SysAllocStringLen(s1,nLen1+nLen2);//�����µ� BSTR ͬʱ�� s1 �ȱ����ȥ
	if(nLen2)
	{
		::memcpy(*pVal+nLen1,s2,nLen2*sizeof(WCHAR));
		//wcscat(*pVal,s2);//û��memcpy���ַ�����
	}
	return S_OK;
}
