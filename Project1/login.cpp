#include "stdafx.h"
#include "login.h"
#include <string>


using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::login form;

	//TODO

	Application::Run(%form);
}