#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
    wxPanel* panel = new wxPanel(this);
    CreateStatusBar();


}



// HANDLE KEY EVENTS (evt.GetUnicodeKey() and evt.GetKeyCode()):

//void MainFrame::OnKeyEvent(wxKeyEvent& evt)
//{
//    int keyCode = evt.GetKeyCode();
//    if (keyCode == WXK_TAB || keyCode == WXK_LEFT || keyCode == WXK_RIGHT || keyCode == WXK_UP || keyCode == WXK_DOWN)
//    {
//        wxWindow* window = static_cast<wxWindow*>(evt.GetEventObject());
//        window->Navigate();
//    }
//    wxChar key = evt.GetUnicodeKey();
//
//    //// note the use of uppercase
//    //if (key == 'A')
//    //{
//    //    wxLogStatus("A was pressed!");
//    //    return;
//    //}
//    //else if (evt.GetKeyCode() == WXK_HOME)
//    //{
//    //    wxLogStatus("Home key was pressed!");
//    //    return;
//    //}
//
//    // if the unicode key returns nothing (could be home key, etc.)
//    //if (key == wxKEY_NONE)
//    //{
//    //    int keyCode = evt.GetKeyCode();
//    //    wxLogMessage("Key: %d", keyCode);
//    //}
//    //else
//    //{
//        wxLogStatus("Key event %c", key);
//    /*}*/
//}




// EVENT HANDLING FUNCTIONS (ALL OF THEM RETURN VOID):

//void MainFrame::OnMouseEvent(wxMouseEvent& evt)
//{
//    // wxGetMousePosition() is absolute to the entire screen, not the open gui,
//    // evt.GetPosition() is relative to the component it is called on
//    wxPoint position = wxGetMousePosition(); // as opposed to evt.GetPosition()
//
//    // convert the position relative to the gui application
//    // notice the use of "this" and not something prefixed by wx (it is inherited, not a "global" function) 
//    position = this->ScreenToClient(position);
//
//
//    wxString message = wxString::Format("Mouse event detected at %d %d", position.x, position.y);
//    wxLogStatus(message);
//}

//void MainFrame::OnClose(wxCloseEvent& evt)
//{
//    wxLogMessage("Closed frame!");
//
//    // allow wxFrame to handle the event as well
//    evt.Skip();
//}
//
//void MainFrame::OnPrimaryButtonClicked(wxCommandEvent& evt)
//{
//    wxLogMessage("Primary button clicked");
//
//    // allows event to propagate up even though the evnet has already been handled
//    evt.Skip();
//}
//
//void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt)
//{
//    wxString str = wxString::Format("Any button clicked");
//    wxLogStatus(str);
//}




// STATIC EVENT HANDLING (PREFER DYNAMIC EVENT HANDLING):

// must be:
// positive
// not 0 or 1
// not between 4999 and 5999
enum ids
{
    BUTTON = 2,
};

//wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
//    EVT_BUTTON(ids::BUTTON, MainFrame::OnButtonClicked)
//wxEND_EVENT_TABLE()



// ----------------------------------------------
// From constructor:                            |
// ----------------------------------------------




// KEY EVENTS:

//// wxwidgets will stretch a singular element to size of entire 
//// screen if it is the only child available

//// wxWANTS_CHARS allows element to accept character inputs (even if they do nothing)
//// in addition to regular inputs, such as a button
//// disables the loud error sound created by windows
//wxPanel* panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxWANTS_CHARS);
//wxButton* btn1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(100, 100), wxSize(100, 50));
//wxButton* btn2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(100, 200), wxSize(100, 50));

//wxStatusBar* statusBar = CreateStatusBar();
//statusBar->SetDoubleBuffered(true);

//// lower level than wxEVT_KEY_DOWN, is application wide
//panel->Bind(wxEVT_CHAR_HOOK, &MainFrame::OnKeyEvent, this);



// MOUSE EVENTS:

//wxButton* btn = new wxButton(panel, wxID_ANY, "fat button", wxPoint(200, 400), wxSize(150, 50), wxBU_TOP | wxBU_RIGHT);

//// stops the flickering from constant updates
//wxStatusBar* statusBar = CreateStatusBar();
//statusBar->SetDoubleBuffered(true);

//// detects mouse movement
//panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
//btn->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);



// STYLING:

//// combine styles with bitwise OR
//wxButton* button = new wxButton(panel, wxID_ANY, "Click me!", wxPoint(150, 50), wxSize(100, 35),
//    wxBU_LEFT | wxBU_TOP);



// DYNAMIC EVENT HANDLING AND EVENT PROPAGATION:

//// event will propagate up (only command events (and window close? event) propagate up, mouse events do not)
//this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);

//// favour dynamic event handling almost always
//button->Bind(wxEVT_BUTTON, &MainFrame::OnPrimaryButtonClicked, this);
//// use UnBind to remove event handling
////button->Unbind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);

//this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);



// COMMON CONTROLS:

//// default size
//wxCheckBox* checkbox = new wxCheckBox(panel, wxID_ANY, "checkbox!", wxPoint(200, 150));


//// default size will make text fit
//wxStaticText* text = new wxStaticText(panel, wxID_ANY, "Unchangeable text", wxPoint(300, 300), wxSize(400, 100)
//    ,wxALIGN_CENTER_HORIZONTAL);
//text->SetBackgroundColour(*wxLIGHT_GREY);
//text->SetLabelText("new unchangeable text");    

//// -1 means default size;
//wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "Default text", wxPoint(100, 100), wxSize(200, -1));

//wxArrayString options = { "one", "two", "three" };
//wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "Radio box", wxPoint(300, 500), wxSize(200, -1), options);
//radioBox->Select(2);