#pragma once


// CThickDlg dialog

class CThickDlg : public CDialog
{
	DECLARE_DYNAMIC(CThickDlg)

public:
	CThickDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CThickDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_THICDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	double m_thick;
};
