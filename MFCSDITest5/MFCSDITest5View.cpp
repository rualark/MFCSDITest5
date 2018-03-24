
// MFCSDITest5View.cpp : implementation of the CMFCSDITest5View class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCSDITest5.h"
#endif

#include "MFCSDITest5Doc.h"
#include "MFCSDITest5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCSDITest5View

IMPLEMENT_DYNCREATE(CMFCSDITest5View, CView)

BEGIN_MESSAGE_MAP(CMFCSDITest5View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMFCSDITest5View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMFCSDITest5View construction/destruction

CMFCSDITest5View::CMFCSDITest5View()
{
	// TODO: add construction code here

}

CMFCSDITest5View::~CMFCSDITest5View()
{
}

BOOL CMFCSDITest5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCSDITest5View drawing

void CMFCSDITest5View::OnDraw(CDC* /*pDC*/)
{
	CMFCSDITest5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMFCSDITest5View printing


void CMFCSDITest5View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMFCSDITest5View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCSDITest5View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCSDITest5View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CMFCSDITest5View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCSDITest5View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCSDITest5View diagnostics

#ifdef _DEBUG
void CMFCSDITest5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCSDITest5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCSDITest5Doc* CMFCSDITest5View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCSDITest5Doc)));
	return (CMFCSDITest5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCSDITest5View message handlers
