//9. Write a C++ program that takes a number as input and prints its multiplication table up to 10.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}
