#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

int calculateArea(const Rectangle& rect) {
    return rect.length * rect.width;
}

void drawHollowRectangle(const Rectangle& rect) {
    for (int i = 0; i < rect.width; i++) {
        for (int j = 0; j < rect.length; j++) {

            if (i == 0 || i == rect.width - 1 || j == 0 || j == rect.length - 1) {
                cout << "=";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {

    Rectangle rect;
    rect.length = 30;
    rect.width = 10;

    int area = calculateArea(rect);
    cout << "Area of the rectangle: " << area << endl;

    cout << "Drawing the hollow rectangle:" << endl;
    drawHollowRectangle(rect);

    return 0;
}
