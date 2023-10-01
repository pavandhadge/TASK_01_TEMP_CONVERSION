#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9/5) - 459.67;
}

int main() {
    double temperature;
    char unit;

    cout << "Enter temperature value: ";
    cin >> temperature;

    cout << "Enter unit (C, F, K): ";
    cin >> unit;

    switch (unit) {
        case 'C':
        case 'c':
            cout << "Fahrenheit: " << celsiusToFahrenheit(temperature) << " °F" << endl;
            cout << "Kelvin: " << celsiusToKelvin(temperature) << " K" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Celsius: " << fahrenheitToCelsius(temperature) << " °C" << endl;
            cout << "Kelvin: " << fahrenheitToKelvin(temperature) << " K" << endl;
            break;
        case 'K':
        case 'k':
            cout << "Celsius: " << kelvinToCelsius(temperature) << " °C" << endl;
            cout << "Fahrenheit: " << kelvinToFahrenheit(temperature) << " °F" << endl;
            break;
        default:
            cout << "Invalid unit entered." << endl;
    }

    return 0;
}
