
// MFCSDITest5.h : main header file for the MFCSDITest5 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCSDITest5App:
// See MFCSDITest5.cpp for the implementation of this class
//

class CMFCSDITest5App : public CWinAppEx
{
public:
	CMFCSDITest5App();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCSDITest5App theApp;
