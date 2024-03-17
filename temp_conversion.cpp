#include <iostream>
#include <iomanip>

using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5 / 9;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9 / 5 - 459.67;
}

int main() {
    cout << "Temperature Conversion Program" << endl;
    cout << "-------------------------------" << endl;

    int choice;
    double temperature;

    do {
        // Display menu
        cout << "Choose an option:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << celsiusToFahrenheit(temperature) << endl;
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                cout << "Temperature in Celsius: " << fixed << setprecision(2) << fahrenheitToCelsius(temperature) << endl;
                break;
            case 3:
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                cout << "Temperature in Kelvin: " << fixed << setprecision(2) << celsiusToKelvin(temperature) << endl;
                break;
            case 4:
                cout << "Enter temperature in Kelvin: ";
                cin >> temperature;
                cout << "Temperature in Celsius: " << fixed << setprecision(2) << kelvinToCelsius(temperature) << endl;
                break;
            case 5:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                cout << "Temperature in Kelvin: " << fixed << setprecision(2) << fahrenheitToKelvin(temperature) << endl;
                break;
            case 6:
                cout << "Enter temperature in Kelvin: ";
                cin >> temperature;
                cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << kelvinToFahrenheit(temperature) << endl;
                break;
            case 7:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
