# Interface Segregation Principle (ISP)
The ISP principle requires that an interface not contain unused methods, and that a class should create a dependency with an interface that contains only the methods it uses. This principle ensures that a class uses only the ones it needs, rather than using too many methods unnecessarily. Thus, when a class's interface changes, there are fewer dependencies that only related classes will be affected.

## How does it work?
This C++ code provides a simple example that implements the Interface Segregation Principle(ISP). The code illustrates a scenario where different devices implement a certain interface and using these interfaces devices perform certain functions.

One interface called IPrter contains a function called print(), while another interface called IScanner contains a function called scan(). Both interfaces contain pure virtual functions. Next, the Printer class implements the IPrinter interface, while the Scanner class implements the IScanner interface.

Next, the AllInOne class implements both the IPrinter and IScanner interfaces. This represents an integrated device that includes both a printer and a scanner.

The main() function first creates an instance of the Printer class, demonstrating the use of the IPrter interface. Likewise, it demonstrates its use of the IScanner interface by creating an instance of the Scanner class. Finally, it demonstrates its use of both the IPrinter and IScanner interfaces by creating an instance of the AllInOne class.

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
This project is licensed under the MIT license. See the LICENSE file for more information. [LICENSE] (https://github.com/nurullah-arican/SolidPrinciples-DependencyInjection/blob/main/LICENSE)
