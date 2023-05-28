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

class Color {
protected:
    string fillColor;

public:
    void setFillColor(string color) {
        fillColor = color;
    }
};

class Rectangle : public Shape, public Color {
public:
    void displayInfo() {
        cout << "Width: " << width << ", Height: " << height << ", Fill Color: " << fillColor << endl;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.setDimensions(5, 7);
    rectangle.setFillColor("Blue");
    rectangle.displayInfo();

    return 0;
}

