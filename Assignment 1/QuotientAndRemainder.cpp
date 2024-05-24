/*. Write a C++ program to compute the quotient and remainder.
Sample Output:
------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1 */

#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;

    cout << "Input the dividend: ";
    cin >> dividend;

    cout << "Input the divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
    }

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    cout << "The quotient of the division is: " << quotient << endl;
    cout << "The remainder of the division is: " << remainder << endl;

    return 0;
}
