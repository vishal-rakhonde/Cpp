#include <iostream>
using namespace std;

float CelsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float CelsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    float celsius;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    float fahrenheit = CelsiusToFahrenheit(celsius);
    float kelvin = CelsiusToKelvin(celsius);

    cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;
    cout << "Temperature in Kelvin: " << kelvin << " K" << endl;

    return 0;
}
