#include "mainGUI.h"
#include "loginGUI.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void WinMain()

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);
    mainGUI::mainGUI form;
    //MyProject::MyForm form;
    PandaProperty::loginGUI loginForm;
    Application::Run(% loginForm);
    //Application::Run(% form); 
}
