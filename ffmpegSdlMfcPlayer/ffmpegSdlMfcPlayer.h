
// ffmpegSdlMfcPlayer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CffmpegSdlMfcPlayerApp:
// �йش����ʵ�֣������ ffmpegSdlMfcPlayer.cpp
//

class CffmpegSdlMfcPlayerApp : public CWinApp
{
public:
	CffmpegSdlMfcPlayerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CffmpegSdlMfcPlayerApp theApp;