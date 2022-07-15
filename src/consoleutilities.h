/*--------------------------------------------------------------------*
|                                                                     |
|																      |
|         (c) Agesoft 2020-2021 All rights reserved					  |
|	consoleutilities.h -- A Library For Easier C++ Developent         |
|	                                                                  |
|	                                                                  |
*--------------------------------------------------------------------*/

// Consoleutilities Version 1.3.0 BETA

const double VERSION = 1.3;
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

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

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
	
		struct ConsoleWindow {
			static void hideConsole();
			static void showConsole();
			static void minimizeConsole();
			static void maximizeConsole();
			static void restoreNormalConsoleSize();
		};

		const double PI = 3.14;

		template<typename T>
		T random(T max) {

			for (int i = 0; i < 100; i++)
			{
				T out = rand() % max;
				return out;
			}
		}

		double getProcentNumber(double value);
		double getCircleArea(double r);
		double getCircleScope(double r);

		// Changes The Console Color, insert a color by using the Color Enum.
		void changeColorText(Color color);

		void printc(std::string str, Color color);

		struct Networking {
			// Checks for Internet Connection
			static bool checkForInternet(bool iCheck);
		};
	}
}

#pragma endregion
