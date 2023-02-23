#include <iostream>

// A interface for a printer
class IPrinter {
public:
    virtual void print() = 0;
};

// A interface for a scanner
class IScanner {
public:
    virtual void scan() = 0;
};

// A class that implements the printer interface
class Printer : public IPrinter {
public:
    void print() override {
        std::cout << "Printing a document." << std::endl;
    }
};

// A class that implements the scanner interface
class Scanner : public IScanner {
public:
    void scan() override {
        std::cout << "Scanning a document." << std::endl;
    }
};

// A class that implements both printer and scanner interfaces
class AllInOne : public IPrinter, public IScanner {
public:
    void print() override {
        std::cout << "Printing a document." << std::endl;
    }

    void scan() override {
        std::cout << "Scanning a document." << std::endl;
    }
};

int main() {
    Printer printer;
    Scanner scanner;
    AllInOne allInOne;

    // Use the printer
    IPrinter& printerRef = printer;
    printerRef.print();

    // Use the scanner
    IScanner& scannerRef = scanner;
    scannerRef.scan();

    // Use the all-in-one device
    IPrinter& allInOnePrinterRef = allInOne;
    IScanner& allInOneScannerRef = allInOne;
    allInOnePrinterRef.print();
    allInOneScannerRef.scan();

    return 0;
}
