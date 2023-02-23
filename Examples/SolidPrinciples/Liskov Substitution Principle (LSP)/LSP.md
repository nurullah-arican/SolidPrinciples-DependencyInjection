# Liskov Substitution Principle (LSP)

The Liskov Substitution Principle (LSP) is one of the SOLID principles for software development. This principle states that a derived class should be able to be used in place of a superclass.
The point of LSP is that subclasses that replace a class do not change the expected behavior. Thus, it prevents unexpected errors from occurring in the code and creates a more flexible and maintainable code base.

## How does it work?
In the program, a base class named "Shape" and a derived class named "Rectangle" are defined. A virtual function named "draw" is defined in the "Shape" class, and this function is "Drawing a shape." prints the message to the screen. The "Rectangle" class derives from the "Shape" class and redefines the "draw" function to "Drawing a rectangle." prints the message to the screen.

Also, a function named "drawShape" is defined in the program. This function takes a parameter of type "Shape" and calls the "draw" function of this parameter. In this way, the "drawShape" function can also take any of the derived classes of the "Shape" class.

In the Main function, objects from the "Shape" and "Rectangle" classes are created. First, the "drawShape" function is called with an object of the "Shape" class and "Drawing a shape." message is printed. Next, the same function is called with an object of class "Rectangle" and this time "Drawing a rectangle." message is printed.

In this way, applying the Liskov Substitution principle, the "Rectangle" class was able to replace the "Shape" class and the program worked correctly.

## Requirements
This program is written in the C++ programming language and requires a C++ compiler. You will also need the standard library files used in this program.

## How to use?
This code is very simple to use. It only requires a C++ compiler. You can run the code by copying it to a C++ file and compiling it.

If a C++ compiler is not installed, you can download and install a C++ compiler, such as Visual Studio for the Windows operating system.

You can follow the steps below to compile and run the code:

1-Open the code in a text editor and save it in a file with the extension `".cpp" (eg "program.cpp").`

2-Compile the code using the C++ compiler. For example, you can compile in Visual Studio by pressing `"Ctrl + Shift + B"` or using a `terminal/command prompt.`

3-If the compilation is successful, an executable will be created. You can use the command `"./program" (for Linux or macOS)` or `"program.exe" (for Windows)` from the terminal/command prompt to open the executable.

## license
This project is licensed under the MIT license. See the LICENSE file for more information. [LICENSE](https://github.com/nurullah-arican/SolidPrinciples-DependencyInjection/blob/main/LICENSE)
