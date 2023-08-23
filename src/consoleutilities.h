/*---------------------------------------------------------------------*
|                                                                      |
|																	   |
|         (c) Agesoft 2020-2023 All rights reserved			           |
|	consoleutilities.h -- A Library For Easier C++ Developent          |
|	                                                              	   |
|	                                                              	   |
*---------------------------------------------------------------------*/

// Consoleutilities Version 1.4.1

#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <Windows.h>
#include <winuser.h>
#include <ctime>
#include <fstream>
#include <math.h>

#pragma region consoleutilities

// Version variables
class Consoleutilities {
public:
	Consoleutilities();
	~Consoleutilities();
public:
	double Version = 1.4;
	int Build = 15;
	std::string Maintainer = "Agesoft";
private:
}

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

			for (int i = 0; i < 10000; i++)
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
			// [DEPRECATED] Checks for Internet Connection
			[[deprecated("has been Deprecated because InternetCheckConnection() has been deprecated as well")]]
			static bool checkForInternet(bool iCheck);
		};
	}
}

#pragma endregion
