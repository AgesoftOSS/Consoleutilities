/*--------------------------------------------------------------------*
|                                                                     |
|								      |
|         (c) Agesoft 2020-2021 All rights reserved	              |
|	consoleutilities.h -- A Library For Easier C++ Developent     |
|	                                                              |
|	                                                              |
*--------------------------------------------------------------------*/

// Consoleutilities Version 0.1.2 STABLE BUILD

const double VERSION = 1.2;
const int BUILD_NUMBER = 8;

#pragma once
#include <iostream>
#include <math.h>
#include <Windows.h>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // The Handle That Consoleutilities Uses for STD_OUTPUT_HANDLE

#pragma region consoleutilities

// SetConsoleTextAttribute() Colors.
enum Color {
	WHITE = 0x07,
	RED = 0x0004,
	BLUE = 0x0001,
	GREEN = 0x0002,
	VIOLETTE = 0x05,
	YELLOW = 0x06,
	BRIGHTYELLOW = 0x000E,
	CYAN = 0x000B,
};

// the consoleutilities namespace
namespace as {

	
	struct Application {
		static void Exit() const { exit(0); }
	};

	// all functions that interacts with the console is in this namespace
	namespace consoleinteraction {

		struct ConsoleWindow {
			static void HideConsole() const { ShowWindow(GetConsoleWindow(), SW_HIDE); };
			static void ShowConsole() const { ShowWindow(GetConsoleWindow(), SW_SHOW); };
			static void MinimizeConsole() const { ShowWindow(GetConsoleWindow(), SW_MINIMIZE); };
			static void MaximizeConsole() const { ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); };
			static void RestoreNormalConsoleSize() const { ShowWindow(GetConsoleWindow(), SW_NORMAL); };
		};

		//puts the console to wait for any button pressed
		void Wait() const { system("pause"); }
		// Clears the console
		void Clear() const { system("cls"); }
	}
	// The Math Namespace Contains The Math Class
	namespace math {

		// Shorted PI Number
		const double PI = 3.14;

		//Gets the decimal number of the procent value
		double GetProcentNumber(double value) { return value / 100; }
		double ExpotentMath(double basis, double potenz) { return pow(basis, potenz); }
		double Rootsquare(double value) { return sqrt(value); }
		double GetCircleArea(double r) { return PI * pow(r, 2); }
		double GetCircleScope(double r) { return 2 * PI * r; }
	}

	// The Message Namespace Contains Message Functions
	namespace message {
		
			template<typename T>
			void Print(T text) { cout << text << endl; }
	}

	// all functions that changes the text in any form is in this namespace
	namespace consoletext {
		// Changes The Console Color, insert a color by using the Color Enum.
		void ChangeColorText(Color colorID) {SetConsoleTextAttribute(h, colorID); }
	}

	// all functions that simplefy your c++ development is in this namespace
	namespace simplefied {
		void PrintBuildInfo(const string aCompanyName, const int YEARSTART, const int YEAREND, const string aName, const int MAJOR_VERSION, const int MINIOR_VERION, const int BUILD_NUMBER) {
			cout << aName << " " << MAJOR_VERSION << "." << MINIOR_VERION << " [Build:" << BUILD_NUMBER << "]\n" << aCompanyName << " " << YEARSTART << "-" << YEAREND << " " << "All Rights Reserved" << endl;
		}
	}

	// prints consoleutilities infos
	void consoleultiesversion const ()
	{
		as::consoletext::ChangeColorText(Color::BRIGHTYELLOW);
		cout << "[Consoleutilities] By Agesoft" << endl;
		as::consoletext::ChangeColorText(Color::BLUE);
		cout << "Version: BETA " << VERSION << endl;
		cout << "Build Number: " << BUILD_NUMBER << endl;
		as::consoletext::ChangeColorText(Color::CYAN);
		cout << "\nCopyright Agesoft" << endl;
		as::consoletext::ChangeColorText(Color::WHITE);
	}

}

#pragma endregion
