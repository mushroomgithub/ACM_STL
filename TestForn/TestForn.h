// TestForn.h : main header file for the TESTFORN application
//

#if !defined(AFX_TESTFORN_H__E216839B_EA00_4C3A_AFBF_0D854620EE29__INCLUDED_)
#define AFX_TESTFORN_H__E216839B_EA00_4C3A_AFBF_0D854620EE29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTestFornApp:
// See TestForn.cpp for the implementation of this class
//

class CTestFornApp : public CWinApp
{
public:
	CTestFornApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestFornApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTestFornApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTFORN_H__E216839B_EA00_4C3A_AFBF_0D854620EE29__INCLUDED_)
