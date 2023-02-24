# Single Responsibility Principle (SRP)
The Single Responsibility Principle (SRP) is one of the SOLID principles and states that a class or function should have only one responsibility. According to this principle, there should be only one thing that a class or function can do and this responsibility should not be deviated. This increases the readability, maintainability and reusability of classes and functions.
SRP is an important principle in software engineering for writing quality and flexible code. Thanks to this principle, codes become more readable, maintainable and changeable.

## How it works ? 
### **Data Sınıfı**
**Data** sınıfı, aşağıdaki üye değişkenlere sahip bir sınıftır:

**name**: Kişinin adı, bir **std::string** türündedir.
**age**: Kişinin yaşı, bir **int** türündedir.
**Data** sınıfı, ayrıca **setName()**, **getName()**, **setAge()** ve **getAge()** gibi dört yöntem içerir. Bu yöntemler, **name** ve **age** değişkenlerine erişim sağlar.

### DataPrinter Sınıfı
**DataPrinter sınıfı**, **Data** sınıfı için bir çıktı üreten bir sınıftır. **printData()** yöntemi, bir **Data** nesnesini alır ve ekrana kişinin adını ve yaşı yazdırır.

## Usage
This project shows an example using the Data and DataPrinter classes. A Data object is created and the name and age are set using the setName() and setAge() methods. Next, a DataPrinter object is created and the person's name and age are printed using the printData() method.

## Relationship with SRP
In this project, SRP means that the Data and DataPrinter classes each have a single responsibility. The Data class is a class that contains data and only provides access to that data. The DataPrinter class, on the other hand, is a class that produces an output and is only responsible for printing the Data object. This means that each class has only one function, making it less likely that changes will affect other classes when changes are required.

## Installation
You can run the code by copying and compiling it with a C++ compiler.

- For example, save the code in main.cpp and compile it using a C++ compiler.

- For example, on Linux or macOS operating systems, you can run the following command using the g++ compiler:
```
g++ main.cpp -o program
```
This command will compile the main.cpp file and create an executable file named program.

Then you can use the following command to run the program:
```
./program
```
This command runs the program file and displays the output of the program.

## License
This project is licensed under the MIT license. For detailed information, you can check the file [LICENSE](https://github.com/nurullah-arican/SolidPrinciples-DependencyInjection/blob/main/LICENSE).

## Contributing
If you would like to contribute to this project, please first state what kind of contribution you want by opening an issue. Then you can fork the project, make the changes you want, and submit a pull request.
