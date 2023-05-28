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

class Cuboid : public Rectangle {
public:
    int calculateVolume(int depth) {
        return width * height * depth;
    }
};

int main() {
    Cuboid cuboid;
    cuboid.setDimensions(5, 7);
    int area = cuboid.calculateArea();
    int volume = cuboid.calculateVolume(10);
    cout << "Area of the rectangle: " << area << endl;
    cout << "Volume of the cuboid: " << volume << endl;

    return 0;
}

