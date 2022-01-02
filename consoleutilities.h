/*--------------------------------------------------------------------*
|                                                                     |
|								      |
|         (c) Agesoft 2020-2021 All rights reserved	              |
|	consoleutilities.h -- A Library For Easier C++ Developent     |
|	                                                              |
|	                                                              |
*--------------------------------------------------------------------*/

// Consoleutilities Version 1.2.3 BETA

const double VERSION = 1.23;
const int BUILD_NUMBER = 12;

#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <Windows.h>
#include <winuser.h>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <WinInet.h>
#pragma comment(lib,"WinInet.lib")
#pragma comment(lib, "urlmon.lib")

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // The Handle That Consoleutilities Uses for STD_OUTPUT_HANDLE

#pragma region consoleutilities

// SetConsoleTextAttribute() Colors.
enum class Color {
	WHITE = 0x07,
	RED = 0x0004,
	BLUE = 0x0001,
	GREEN = 0x0002,
	VIOLETTE = 0x05,
	YELLOW = 0x06,
	BRIGHTYELLOW = 0x000E,
	CYAN = 0x000B,
};

namespace as {

	// the Consoleutilities namespace
	namespace cu {
		
		using namespace std;

		struct ConsoleWindow {
			static void HideConsole() { ShowWindow(GetConsoleWindow(), SW_HIDE); };
			static void ShowConsole() { ShowWindow(GetConsoleWindow(), SW_SHOW); };
			static void MinimizeConsole() { ShowWindow(GetConsoleWindow(), SW_MINIMIZE); };
			static void MaximizeConsole() { ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); };
			static void RestoreNormalConsoleSize() { ShowWindow(GetConsoleWindow(), SW_NORMAL); };
		};

		const double PI = 3.14;

		double GetProcentNumber(double value) { return value / 100; }
		double GetCircleArea(double r) { return PI * pow(r, 2); }
		double GetCircleScope(double r) { return 2 * PI * r; }

		// Changes The Console Color, insert a color by using the Color Enum.
		void ChangeColorText(Color color) { SetConsoleTextAttribute(h, (WORD)color); }

		void PrintColoredText(string str, Color color)
		{
			SetConsoleTextAttribute(h, (WORD)color);
			cout << str;
			SetConsoleTextAttribute(h, (WORD)Color::WHITE);
		}


		// Reverses a string
		string Reverse(string& str) {
			int n = str.length();
			for (int i = 0; i < n / 2; i++)
			{
				swap(str[i], str[n - i - 1]);
			}

			return str;
		}

		// Converts binary into decimal
		int binary(string& bin)
		{
			int length = bin.length() - 1;
			int val = 1;
			int r = 0;
			for (int i = length; i >= 0; i--)
			{
				char c = bin.at(i);
				if (c == '1')
				{
					r = r + val;
				}
				val = val * 2;
			}
			return r;
		}

		// Converts hex into decimal
		int hex(string& str)
		{
			int r;
			r = stoi(str, 0, 16);
			if (str[0] == '0' && str[1] == 'x') {
				return r;
			}
			else {
				cout << "Not a valid hexdecimal number" << endl;
			}
		}

		struct Networking {
			// Checks for Internet Connection
			static bool CheckForInternet(bool iCheck)
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
		};

		void PrintBuildInfo(const string aCompanyName, const int YEARSTART, const int YEAREND, const string aName, const int MAJOR_VERSION, const int MINIOR_VERION, const int BUILD_NUMBER) {
			cout << aName << " " << MAJOR_VERSION << "." << MINIOR_VERION << " [Build:" << BUILD_NUMBER << "]\n" << aCompanyName << " " << YEARSTART << "-" << YEAREND << " " << "All Rights Reserved" << endl;
		}

		// prints consoleutilities infos
		void consoleultiesversion()
		{
			as::cu::ChangeColorText(Color::BRIGHTYELLOW);
			cout << "[Consoleutilities] By Agesoft" << endl;
			as::cu::ChangeColorText(Color::BLUE);
			cout << "Version: BETA " << VERSION << endl;
			cout << "Build Number: " << BUILD_NUMBER << endl;
			as::cu::ChangeColorText(Color::CYAN);
			cout << "\nCopyright Agesoft" << endl;
			as::cu::ChangeColorText(Color::WHITE);
		}
	}
}
#pragma endregion
