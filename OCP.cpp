#include <iostream>
#include <vector>

// Abstract class for a shape
class Shape {
public:
    virtual double area() = 0;
};

// Rectangle class that implements Shape
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double width, double height) : width(width), height(height) {}

    double area() override {
        return width * height;
    }
};

// Circle class that implements Shape
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius) : radius(radius) {}

    double area() override {
        return 3.14 * radius * radius;
    }
};

// ShapeManager class that can compute the total area of shapes
class ShapeManager {
private:
    std::vector<Shape*> shapes;
public:
    void addShape(Shape* shape) {
        shapes.push_back(shape);
    }

    double totalArea() {
        double area = 0.0;
        for (Shape* shape : shapes) {
            area += shape->area();
        }
        return area;
    }
};

int main() {
    // Create some shapes
    Rectangle r1(3, 4);
    Circle c1(2);

    // Add the shapes to the ShapeManager
    ShapeManager manager;
    manager.addShape(&r1);
    manager.addShape(&c1);

    // Compute the total area of the shapes
    std::cout << "Total area: " << manager.totalArea() << std::endl;

    return 0;
}
