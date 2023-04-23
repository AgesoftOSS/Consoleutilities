# Consoleutilities
![e](https://cdn.discordapp.com/attachments/773986304433979437/861187630459912242/unknown.png)

[![Generic badge](https://img.shields.io/badge/Version-1.3_BETA-309fff.svg)](https://shields.io/)

**Consoleutilities** is a **C++** Library for Windows which makes your c++ development alot easier and faster 

**Features:**

- Changing Console Colors
- Console Interaction *(window size, color changing)*
- Simplefied Math Functions
- Oriented Namespaces

# Getting Started with Consoleutilities

to use it you need to include `consoleutilities.h` in your project explorer then add this code: 
```cpp
#include "consoleutilities.h"
```

**example code:**
```cpp
int main() {
  as::cu::ChangeColorText(Color::CYAN);
  std::cout << "Hello World" << std::endl;
  as::cu::ChangeColorText(Color::WHITE);
}
```

# Contributing 
You can contribute in this repo by finding any bugs / typo please create a **issue** and I look forward for it
