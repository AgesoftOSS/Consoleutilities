# Consoleutilities
![e](https://cdn.discordapp.com/attachments/773986304433979437/861187630459912242/unknown.png)

[![Open in Visual Studio Code](https://open.vscode.dev/badges/open-in-vscode.svg)](https://open.vscode.dev/organization/repository)
[![Generic badge](https://img.shields.io/badge/Version-1.3_BETA-309fff.svg)](https://shields.io/)

**Consoleutilities** is a **C++** Library for Windows which makes your c++ development alot easier and faster 

**Features:**
- Changing Console Lines Color
- Console Interaction *(window size, color changing)*
- Simplefied Math Functions
- Oriented Namespaces

# Getting Started with Consoleutilities
to install and include to your project you need to include this in your project explorer then add this code: 
```cpp
#include "consoleulties.h"
```

**to use Consoleutilities**
first you need to know that `as` is the standart namespace you can accses all functions by using `as` and its other namespaces

**All namespaces**
`as::consoleinteraction` contains the `ConsoleWindow` class that contains window size functions , `Wait()` and `Clear()`

`as::math` contains some Math Functions like `RootSquare()`

`as::message`  contains the `Print()` function

`as::consoletext` contains the `ChangeColorText()` functions

`as::simplefied` contains simplefied functions

**example:**
```cpp
int main() {
  as::consoletext::ChangeColorText(Color::CYAN);
  as::message::Print("Hello World");
  as::consoleinteraction::Wait()
  as::Application::Exit();
}
```

# Contributing
currently you cant contribute on this repo
