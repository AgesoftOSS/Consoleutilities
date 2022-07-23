#include "consoleutilities.h"

#pragma region ConsoleWindow

void as::cu::ConsoleWindow::hideConsole()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
}

void as::cu::ConsoleWindow::showConsole()
{
	ShowWindow(GetConsoleWindow(), SW_SHOW);
}

void as::cu::ConsoleWindow::minimizeConsole()
{
	ShowWindow(GetConsoleWindow(), SW_MINIMIZE);
}

void as::cu::ConsoleWindow::maximizeConsole()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
}

void as::cu::ConsoleWindow::restoreNormalConsoleSize()
{
	ShowWindow(GetConsoleWindow(), SW_NORMAL);
}

#pragma endregion

double as::cu::getProcentNumber(double value)
{
	return value / 100;
}

double as::cu::getCircleArea(double r)
{
	return PI * pow(r, 2);
}

double as::cu::getCircleScope(double r)
{
	return 2 * PI * r;
}

void as::cu::changeColorText(Color color)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, (WORD)color);
}

void as::cu::printc(std::string str, Color color)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, (WORD)color);
	std::cout << str << std::endl;
	SetConsoleTextAttribute(h, (WORD)Color::WHITE);
}

bool as::cu::Networking::checkForInternet(bool iCheck)
{
	wchar_t url[128];
	iCheck = InternetCheckConnection(L"https://www.google.com", FLAG_ICC_FORCE_CONNECTION, 0);

	if (iCheck) {
		return true;
	}
	else {
		return false;
	}
}
