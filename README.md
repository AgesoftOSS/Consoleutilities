# Consoleutilities
**Consoleutilities** is a **C++** Library for Windows which makes your c++ development alot easier and faster

**Features:**
- Changing Console Lines Color
- Console Interaction *(window size, color changing)*
- Premade Functions
- Oriented Namespaces
- Macros

**Note**
Consoleutilities is still unfinished

*this is the only stable build of Consoleutilities i currently own*

# Getting Started with Consoleutilities
to install and inclue to your project you need to include this in your project explorer then add this code: `#include "consoleulties.h"`

**to use Consoleutilities**
first you need to know that `as` is the standart namespace you can accses all functions by using `as` and its other namespaces

**All namespaces**
`as::consoleinteraction` contains the console window interacton class , `Wait()` and `Clear()`

`as::math` contains the `mathe` class that contains math functions *unfinished*

`as::message`  contains the `Print()` function

`as::consoletext` contains the `ChangeColorText()` functions

`as::simplefied` contains simplefied functions

**example:**
```cpp
int main() {
as::message::msg e;
	e.Print("e");
  as::consoleinteraction::Wait()
  as::Application ea;
	ea.Exit();
}
```

> We dont recomend you to use `using namespace as;` or any Consoleutilities namespace
> 
> This is intentended to orginize Consoleutilities functions and namespaces
