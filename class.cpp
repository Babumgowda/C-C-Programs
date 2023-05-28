#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }
};

class Circle {
    float radius;

public:
    void setRadius(float r) {
        radius = r;
    }

    float calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    float length, width, radius;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    Rectangle rectangle;
    rectangle.setDimensions(length, width);
    float rectangleArea = rectangle.calculateArea();
    cout << "Area of the rectangle: " << rectangleArea << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle;
    circle.setRadius(radius);
    float circleArea = circle.calculateArea();
    cout << "Area of the circle: " << circleArea << endl;

    return 0;
}

