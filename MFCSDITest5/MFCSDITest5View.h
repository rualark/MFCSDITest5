
// MFCSDITest5View.h : interface of the CMFCSDITest5View class
//

#pragma once


class CMFCSDITest5View : public CView
{
protected: // create from serialization only
	CMFCSDITest5View();
	DECLARE_DYNCREATE(CMFCSDITest5View)

// Attributes
public:
	CMFCSDITest5Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMFCSDITest5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCSDITest5View.cpp
inline CMFCSDITest5Doc* CMFCSDITest5View::GetDocument() const
   { return reinterpret_cast<CMFCSDITest5Doc*>(m_pDocument); }
#endif

