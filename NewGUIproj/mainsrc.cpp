#include "loggedin.h"
#include "Registeration.h"
#include "signinPage.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//WinformCDemo is your project name
	NewGUIproj::signinPage form;
	Application::Run(% form);
}