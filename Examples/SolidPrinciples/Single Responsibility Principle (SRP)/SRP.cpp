#include <iostream>
#include <string>

// Data class
class Data {
public:
    std::string name;
    int age;

    // Getters and setters
    void setName(const std::string& name) { this->name = name; }
    std::string getName() const { return name; }

    void setAge(int age) { this->age = age; }
    int getAge() const { return age; }
};

// Data printer class
class DataPrinter {
public:
    void printData(const Data& data) const {
        std::cout << "Name: " << data.getName() << std::endl;
        std::cout << "Age: " << data.getAge() << std::endl;
    }
};

int main() {
    // Creating a data object
    Data data;
    data.setName("Nurullah Arican");
    data.setAge(21);

    // Printing the data
    DataPrinter printer;
    printer.printData(data);

    return 0;
}
