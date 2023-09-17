#include <iostream>
using namespace std;
// Base class
class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    void displayDimensions() {
        cout << "Width: " << width << " Height: " << height << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double area() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);

    cout << "Rectangle dimensions:" << endl;
    rectangle.displayDimensions();

    cout << "Rectangle area: " << rectangle.area() << endl;

    return 0;
}
