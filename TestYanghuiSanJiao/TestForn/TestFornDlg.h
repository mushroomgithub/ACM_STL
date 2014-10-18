// TestFornDlg.h : header file
//

#if !defined(AFX_TESTFORNDLG_H__135494FE_FDB8_4432_87A6_E70397C90328__INCLUDED_)
#define AFX_TESTFORNDLG_H__135494FE_FDB8_4432_87A6_E70397C90328__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTestFornDlg dialog

class CTestFornDlg : public CDialog
{
// Construction
public:
	CTestFornDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTestFornDlg)
	enum { IDD = IDD_TESTFORN_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestFornDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTestFornDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
		void SetControlInfo(WORD CtrlId);//将控件的ID存入CDWordArray数组中便于之后在OnSize函数中利用一个循环集中对所有控件进行调整相对位置
										//服务于方法1和2
protected:
		int   m_old_cx,m_old_cy; //服务于方法1
        CDWordArray   m_control_info; //服务于方法1和2
		CRect m_rect;//用于方法2

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTFORNDLG_H__135494FE_FDB8_4432_87A6_E70397C90328__INCLUDED_)
