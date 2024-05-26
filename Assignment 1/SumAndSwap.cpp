//Write a program in C++ to print the sum of two numbers and swap them as well.

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printNumber(const string& message, int a, int b) {
    cout << message << endl;
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
}

int main() {
    int a = 10;
    int b = 20;
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    printNumber("Before swapping:", a, b);

    swap(a, b);

    printNumber("After swapping:", a, b);

    return 0;
}



