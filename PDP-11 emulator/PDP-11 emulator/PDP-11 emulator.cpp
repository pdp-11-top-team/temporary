// PDP-11 emulator.cpp: ������� ���� �������.

#include "stdafx.h"
#include "emulator.cpp"
#include "Form1.h"

using namespace PDP11emulator;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
