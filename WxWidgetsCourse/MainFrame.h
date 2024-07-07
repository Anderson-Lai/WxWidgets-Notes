#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
    MainFrame(const wxString& title);
private:
    void OnKeyEvent(wxKeyEvent& evt);


private:
    //void OnMouseEvent(wxMouseEvent& evt);
    //void OnAnyButtonClicked(wxCommandEvent& evt);
    //void OnPrimaryButtonClicked(wxCommandEvent& evt);
    //void OnClose(wxCloseEvent& evt);
    //wxDECLARE_EVENT_TABLE();
};

