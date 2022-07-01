#pragma once

#include <wx/wx.h>
#include "msMain.h"

class msApp : public wxApp
{
public:
	msApp();
	~msApp();

private:
	msMain* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

