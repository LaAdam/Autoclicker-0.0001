#include "MyForm.h"
#include <Windows.h>

#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	cc00001::MyForm form;
	Application::Run(% form);
}

