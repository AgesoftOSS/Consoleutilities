/*--------------------------------------------------------------------*
|                                                                     |
|																      |
|         (c) Agesoft 2020-2021 All rights reserved					  |
|	consoleutilities.h -- A Library For Easier C++ Developent         |
|	                                                                  |
|	                                                                  |
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
#define EXIT return 0; // Exits The Application
#define ConsoleTitle(d) SetConsoleTitle(d) // Change the Console Title. you need still to do (L"title here")

// Color Macros
#define DEFAULT_COLOR 7
#define FOREGROUND_VIOLETTE 5
#define FOREGROUND_YELLOW 6
#define FOREGROUND_BRIGHTYELLOW 14
#define FOREGROUND_GRAY 8
#define FOREGROUND_CYAN 11
#define BACK_WHITE_FORE_BLACK 112
#define BACK_BLUE_FORE_WHITE 23
#define BACK_BLUE_FORE_GREEN 26
#define BACK_BLUE_FORE_RED 28
#define BACK_YELLOW_FORE_WHITE 110
#pragma endregion

using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // The Handle That Consoleutilities Uses for STD_OUTPUT_HANDLE

#pragma region consoleutilities

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

		const double PI = 3.14;

		// Math is a class that contains all Math Functions
		class mathe {

		private:

		public:

			// <base num>^<potenz>
			void ExpotentMath()
			{
				int basis;
				int potenz;
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

		// msg is a message class that contains all Message Functions
		class msg {

		private:
			// nothing
		public:
			// Message Function works the same like cout
			template<typename T>
			void Print(T text)
			{
				cout << text << endl;
			}
		};
	}

	// all functions that changes the text in any form is in this namespace
	namespace consoletext {
		// Changes The Console Color, insert a ColorID (0-7)
		void ChangeColorText(int colorID)
		{
			if (colorID == 0) { SetConsoleTextAttribute(h, DEFAULT_COLOR); }
			if (colorID == 1) { SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY); }
			if (colorID == 2) { SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY); }
			if (colorID == 3) { SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY); }
			if (colorID == 4) { SetConsoleTextAttribute(h, FOREGROUND_VIOLETTE); }
			if (colorID == 5) { SetConsoleTextAttribute(h, FOREGROUND_YELLOW); }
			if (colorID == 6) { SetConsoleTextAttribute(h, FOREGROUND_BRIGHTYELLOW); }
			if (colorID == 7) { SetConsoleTextAttribute(h, FOREGROUND_CYAN); }
		}
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
		as::consoletext::ChangeColorText(6);
		cout << "[Consoleutilities] By Agesoft" << endl;
		as::consoletext::ChangeColorText(3);
		cout << "Version: BETA " << VERSION << endl;
		cout << "Build Number: " << BUILD_NUMBER << endl;
		as::consoletext::ChangeColorText(7);
		cout << "\nCopyright Agesoft" << endl;
		as::consoletext::ChangeColorText(0);

	}

}

#pragma endregion
