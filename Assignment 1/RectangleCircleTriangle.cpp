/*Q. Write a C++ program to find the
i) Area and Perimeter of a Rectangle.
ii) Area and Circumference of a Circle.
iii) Area of Triangle with Heron's formula.
*/
#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

void menulist() {
    cout << "Enter 1 to calculate Area and Perimeter of a Rectangle" << endl;
    cout << "Enter 2 to calculate Area and Circumference of a Circle" << endl;
    cout << "Enter 3 to calculate Area of Triangle using Heron's formula" << endl;
}

int main() {
    int choice;
    menulist();
    cin >> choice;

    switch (choice) {
        case 1: {
            float length, width, area, perimeter;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width;
            perimeter = 2 * (length + width);
            cout << "Area of the rectangle is: " << area << endl;
            cout << "Perimeter of the rectangle is: " << perimeter << endl;
            break;
        }
        case 2: {
            float radius, area, circumference;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = PI * pow(radius, 2);
            circumference = 2 * PI * radius;
            cout << "Area of the circle is: " << area << endl;
            cout << "Circumference of the circle is: " << circumference << endl;
            break;
        }
        case 3: {
            float a, b, c, s, area;
            cout << "Enter the lengths of the three sides of the triangle: ";
            cin >> a >> b >> c;
            s = (a + b + c) / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            cout << "Area of the triangle is: " << area << endl;
            break;
        }
        default:
            cout << "Enter a valid Input" << endl;
            break;
    }

    return 0;
}