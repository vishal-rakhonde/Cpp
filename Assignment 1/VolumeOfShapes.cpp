//Write a C++ program that calculates the volume of a sphere, cube & cylinder.
#include <iostream>
#include <cmath> // use cmath for the pow function
using namespace std;

const float PI = 3.14;

void menulist() {
    cout << "Enter 1 to calculate volume of sphere" << endl;
    cout << "Enter 2 to calculate volume of cube" << endl;
    cout << "Enter 3 to calculate volume of cylinder" << endl;
}

int main() {
    int choice;
    menulist();
    cin >> choice;
    
    float volume, r, l, h;

    switch (choice) {
        case 1: {
            cout << "Enter radius in cm: ";
            cin >> r;
            volume = (4.0 / 3) * PI * pow(r, 3);
            cout << "Volume of sphere is: " << volume << endl;
            break;
        }
        case 2: {
            cout << "Enter length of edge in cm: ";
            cin >> l;
            volume = pow(l, 3);
            cout << "Volume of cube is: " << volume << endl;
            break;
        }
        case 3: {
            cout << "Enter radius in cm: ";
            cin >> r;
            cout << "Enter height in cm: ";
            cin >> h;
            volume = PI * pow(r, 2) * h;
            cout << "Volume of cylinder is: " << volume << endl;
            break;
        }
        default:
            cout << "Enter valid Input" << endl;
            break;
    }

    return 0;
}