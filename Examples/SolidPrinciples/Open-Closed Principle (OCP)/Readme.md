# Open-Closed Principle (OCP)
The Open-Closed Principle (OCP) is part of the SOLID principles and is an important concept in software design. This principle states that software components must retain their current functionality before being modified.

OCP adopts the idea that a class should be closed to changes and open to extension at the same time. This is accomplished by providing an interface to add new behaviors without changing the existing behavior of the class.

## How it works ?
This code defines an abstract Shape interface and derives the Rectangle and Circle classes to implement this interface. Each class provides a pure virtual function (area) that calculates the area of the shape.

In the Main function, a rectangle and a circle are created and the total area of these shapes is calculated. The total area is stored in a vector of shape objects and calculated with the getTotalArea function. The getTotalArea function calculates the areas of shape objects and sums them to calculate the total area.

Finally, the total area is printed to the screen.

## Requirements
To compile and run this program, you need to have:
- C++ compiler (supporting C++11 or later)
- Git (optional, if you want to clone the repository)

## Installation
- To get started, you can clone this repository using the following command:
```
git clone https://github.com/username/repo.git
```
Alternatively, you can download the source code as a ZIP file and extract it on your machine.
## Usage
To compile the program, navigate to the project directory and run the following command:
```
g++ -std=c++11 main.cpp -o shape_area_calculator
```
This will generate an executable file named shape_area_calculator.

To run the program, simply type:
```
./shape_area_calculator
```
The program will calculate the total area of different shapes and print the result to the console.

## License
This project is licensed under the MIT License - see the [LICENSE](https://github.com/nurullah-arican/SolidPrinciples-DependencyInjection/blob/main/LICENSE) file for details.
