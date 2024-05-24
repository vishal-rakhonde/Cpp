/*Write a program in C++ that converts kilometers per hour to miles per
hour before conversion you have to provide a check that the input number
should not be zero or negative. */

#include <iostream>
using namespace std;

void KilometerToMiles(float km) {
    float conversion = km * 0.621371;
    cout << km << " km/hr is equal to " << conversion << " miles/hr" << endl;
}

int main() {
    float km;
    cout << "Enter the speed in km/hr: ";
    cin >> km;

    if (km <= 0) {
        cout << "Enter a valid number greater than 0" << endl;
    } else {
        KilometerToMiles(km);
    }

    return 0;
}
