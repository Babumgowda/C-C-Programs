#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    friend int calculateArea(Rectangle rect);
};


int calculateArea(Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    int length, width;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    Rectangle rectangle(length, width);

    int area = calculateArea(rectangle);
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}

