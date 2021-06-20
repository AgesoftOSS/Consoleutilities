/*--------------------------------------------------------------------*
|                                                                     |
|								      |
|         (c) Agesoft 2020-2021 All rights reserved	              |
|	consoleutilities.h -- A Library For Easier C++ Developent     |
|	                                                              |
|	                                                              |
*--------------------------------------------------------------------*/

// Consoleutilities Version 0.1.1 BETA

const double VERSION = 1.1;
const int BUILD_NUMBER = 4;

#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>

#pragma region Macros
// Console Interaction MacroS
#define ConsoleTitle(d) SetConsoleTitle(d) // Change the Console Title. you need still to do (L"title here")

#pragma endregion

using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // The Handle That Consoleutilities Uses for STD_OUTPUT_HANDLE

#pragma region consoleutilities

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

// the console ulties namespace
namespace as {

	
	class Application {
	public:

		void Exit() { exit(0); }
	};

	// all functions that interacts with the console is in this namespace
	namespace consoleinteraction {

		class ConsoleWindow {
		public:
			void HideConsole() { ShowWindow(GetConsoleWindow(), SW_HIDE); };
			void ShowConsole() { ShowWindow(GetConsoleWindow(), SW_SHOW); };
			void MinimizeConsole() { ShowWindow(GetConsoleWindow(), SW_MINIMIZE); };
			void MaximizeConsole() { ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); };
			void RestoreNormalConsoleSize() { ShowWindow(GetConsoleWindow(), SW_NORMAL); };
		};

		//puts the console to wait for any button pressed
		void Wait() { system("pause"); }
		// Clears the console
		void Clear() { system("cls"); }
	}
	// The Math Namespace Contains The Math Class
	namespace math {

		// Shorted PI Number
		const double PI = 3.14;

		// Math is a class that contains all Math Functions
		class mathe {
		public:

			// <base num>^<potenz>
			void ExpotentMath()
			{
				int basis, potenz;
				cout << "whats the basis: ";
				cin >> basis;
				cout << endl << "whats the potenz: ";
				cin >> potenz;
				cout << "Result: " << pow(basis, potenz) << endl;
			}

		};

	}

	// The Message Namespace Contains Message Functions
	namespace message {
		
			template<typename T>
			void Print(T text)
			{
				cout << text << endl;
			}
	}

	// all functions that changes the text in any form is in this namespace
	namespace consoletext {
		// Changes The Console Color, insert a ColorID (0-7)
		void ChangeColorText(Color colorID) {SetConsoleTextAttribute(h, colorID); }
	}

	// all functions that simplefy your c++ development is in this namespace
	namespace simplefied {
		void PrintBuildInfo(const string aCompanyName, const int YEARSTART, const int YEAREND, const string aName, const int MAJOR_VERSION, const int MINIOR_VERION, const int BUILD_NUMBER) {
			cout << aName << " " << MAJOR_VERSION << "." << MINIOR_VERION << " [Build:" << BUILD_NUMBER << "]\n" << aCompanyName << " " << YEARSTART << "-" << YEAREND << " " << "All Rights Reserved" << endl;
		}
	}

	// prints consoleutilities infos
	void consoleultiesversion()
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
