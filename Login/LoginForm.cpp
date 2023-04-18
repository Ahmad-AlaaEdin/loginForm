#include "LoginForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void log(array<String^>^ args)

{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Login::LoginForm);

}