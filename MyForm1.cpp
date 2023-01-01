#include "MyForm1.h"
#include "MyForm.h"
#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	firstGUITrial::MyForm1 form;
	Application::Run(% form);
	return 0;
}
