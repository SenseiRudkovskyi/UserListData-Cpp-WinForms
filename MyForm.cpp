#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args){
	CoolProjectUI::MyForm form;
	Application::Run(% form);
}
