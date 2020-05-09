
// ChildView.h : interface of the CChildView class
//


#pragma once

#include "graphics/OpenGLWnd.h"
#include "graphics/GrTexture.h"
#include "graphics/GrCamera.h"
#include "Mesh.h"


// CChildView window

class CChildView : public COpenGLWnd
{
// Construction
public:
	CChildView();

// Attributes
public:

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	void OnGLDraw(CDC* pDC);
	void Box(GLdouble p_x, GLdouble p_y, GLdouble p_z, const GLdouble* p_color);

private:
	CGrTexture m_wood;
	CGrCamera m_camera;

	double  m_spinAngle;
	UINT_PTR m_spinTimer;

	CMesh	m_mesh;

	int m_scene;

	CMesh	m_surface;

	// fish mesh
	CMesh	m_fish;

	// fish texture
	CGrTexture   m_bluegill;

	CGrTexture   m_blue;

	CMesh  m_letter;

	double m_thickness;

public:
	afx_msg void OnStepSpin();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnStepMesh();
	void CreateMesh();
	afx_msg void OnStepLetter();
	void Letter();
	afx_msg void OnStepThick();
};

