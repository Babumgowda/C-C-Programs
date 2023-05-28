#include <iostream>
using namespace std;

class Shape {
protected:
    int width;
    int height;

public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    int calculateArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.setDimensions(5, 7);
    int area = rectangle.calculateArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}

