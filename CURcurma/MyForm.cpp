#include "MyForm.h"
#include <sstream>
#include <Windows.h>
#include <string>
//#include "muparser-2.3.4/include/muParser.h"
#include "main.h"


using namespace System;
using namespace System::Windows::Forms;
//using namespace std;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CURcurma::MyForm form;
	Application::Run(% form);


	return 0;
}
