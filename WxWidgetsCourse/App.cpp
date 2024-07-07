#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);
// Properties -> Linker -> System -> SubSystem -> "Windows" NOT "Console"

bool App::OnInit()
{
    MainFrame* mainFrame = new MainFrame("C++ Gui");
    mainFrame->SetClientSize(1000, 600);
    //mainFrame->SetSize(800, 600);
    mainFrame->Center();
    mainFrame->Show();
    return true;
}