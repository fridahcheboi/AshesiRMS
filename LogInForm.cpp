#include "LogInForm.h"

using namespace System;
using namespace System::Windows::Forms;
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AshesiRMS::LogInForm form;
	Application::Run(% form);
}