#include "RegForm.h"



using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void reg(array<String^>^ args)

{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Login::RegForm);

}