#include "msApp.h"

wxIMPLEMENT_APP(msApp);

msApp::msApp()
{

}

msApp::~msApp()
{

}

bool msApp::OnInit()
{
	m_frame1 = new msMain();
	m_frame1->Show();

	return true;
}