// ThickDlg.cpp : implementation file
//

#include "pch.h"
#include "Step2.h"
#include "ThickDlg.h"
#include "afxdialogex.h"


// CThickDlg dialog

IMPLEMENT_DYNAMIC(CThickDlg, CDialog)

CThickDlg::CThickDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_THICDLG, pParent)
	, m_thick(0)
{

}

CThickDlg::~CThickDlg()
{
}

void CThickDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_THICKDLG, m_thick);
}


BEGIN_MESSAGE_MAP(CThickDlg, CDialog)
END_MESSAGE_MAP()


// CThickDlg message handlers
