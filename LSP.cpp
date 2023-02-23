#include <iostream>

// Base class for a shape
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived class for a rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

// Function that takes a Shape parameter
void drawShape(Shape& shape) {
    shape.draw();
}

int main() {
    Shape shape;
    Rectangle rectangle;

    // Call the function with a Shape object
    drawShape(shape);

    // Call the function with a Rectangle object
    drawShape(rectangle);

    return 0;
}
