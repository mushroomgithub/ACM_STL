// TestFornDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TestForn.h"
#include "TestFornDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestFornDlg dialog

CTestFornDlg::CTestFornDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTestFornDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTestFornDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_old_cx=0;
	m_old_cy=0;
}

void CTestFornDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTestFornDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTestFornDlg, CDialog)
	//{{AFX_MSG_MAP(CTestFornDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestFornDlg message handlers

BOOL CTestFornDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	GetClientRect(&m_rect);//服务于方法2
	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	////////////////////////////////////////////////服务于方法1和2
	SetControlInfo(IDOK);
	SetControlInfo(IDCANCEL);
	SetControlInfo(IDC_BUTTON1);
	SetControlInfo(IDC_BUTTON2);
	SetControlInfo(IDC_BUTTON3);
	SetControlInfo(IDC_BUTTON4);
	SetControlInfo(IDC_BUTTON5);
	SetControlInfo(IDC_BUTTON6);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTestFornDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTestFornDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTestFornDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
void CTestFornDlg::SetControlInfo(WORD CtrlId)//服务于方法1和2
{
	m_control_info.Add(CtrlId);
}

void CTestFornDlg::OnSize(UINT nType, int cx, int cy) 
{
	 if(cx==0   ||   cy==0) //服务于方法1
        { 
                cx=800; 
                cy=600; 
        } 
	CDialog::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	float   dx_percent   =   (m_old_cx   ==0)?   1   :   (float)((float)cx/(float)m_old_cx); 
        float   dy_percent   =   (m_old_cy   ==0)?   1   :     (float)((float)cy/(float)m_old_cy); 
  
        if(m_old_cx) 
        { 
                CRect   WndRect; 
                CWnd   *pWnd; 
                for(int   i   =   0;   i   <   m_control_info.GetSize();   i++) 
                { 
                        pWnd   =   GetDlgItem(m_control_info[i]); 
                        if(!pWnd) 
                        { 
                                TRACE( "Control   ID   -   %d   NOT   FOUND!!\n ",m_control_info[i]); 


                                continue; 
                        } 
  
                        pWnd-> GetWindowRect(&WndRect); 
						m_control_rect=WndRect;
                        ScreenToClient(&WndRect); 
  
                        WndRect.left   =   (int)(WndRect.left*dx_percent); 
                        WndRect.right   =   (int)(WndRect.right*   dx_percent); 
                        WndRect.bottom   =   (int)(WndRect.bottom*dy_percent); 
                        WndRect.top   =   (int)(WndRect.top*dy_percent); 
  
                        pWnd-> MoveWindow(&WndRect); 
                } 
  
        } 
        m_old_cx   =   cx; 
        m_old_cy   =   cy; 
	
		/*CRect   WndRect; //效果同上,服务于方法2
        CWnd   *pWnd; 
		for(int   i   =   0;   i   <   m_control_info.GetSize();   i++) 
                { 
                        pWnd   =   GetDlgItem(m_control_info[i]); 
                        if(!pWnd) 
                        { 
                                TRACE( "Control   ID   -   %d   NOT   FOUND!!\n ",m_control_info[i]); 


                                continue; 
                        } 
  
                        pWnd-> GetWindowRect(&WndRect); 
                        ScreenToClient(&WndRect); 
  
                        WndRect.left=WndRect.left*cx/m_rect.Width();/////调整控件大小
						WndRect.right=WndRect.right*cx/m_rect.Width();
						WndRect.top=WndRect.top*cy/m_rect.Height();
						WndRect.bottom=WndRect.bottom*cy/m_rect.Height();
                        pWnd-> MoveWindow(&WndRect); 
                } 
		GetClientRect(&m_rect);//将变化后的对话框大小设为旧大小*/
}
