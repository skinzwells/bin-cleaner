#include "MyForm.h"
#include <stdio.h>
using namespace Tray2;
//namespace fs = std::filesystem;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}
