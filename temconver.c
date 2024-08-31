#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

// Function to convert Celsius to Kelvin
float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    float temperature, fahrenheit, kelvin;
    char unit;

    printf("Welcome to the Temperature Converter!\n");

    // Get user input for temperature and unit
    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    printf("Enter the unit (C for Celsius): ");
    scanf(" %c", &unit);

    // Check if the unit is Celsius
    if (unit == 'C' || unit == 'c') {
        // Convert from Celsius to Fahrenheit and Kelvin
        fahrenheit = celsius_to_fahrenheit(temperature);
        kelvin = celsius_to_kelvin(temperature);
        printf("%.2f°C is %.2f°F and %.2fK\n", temperature, fahrenheit, kelvin);
    } else {
        printf("Invalid unit. Please enter 'C' for Celsius.\n");
    }

    printf("Thank you for using the Temperature Converter!\n");

    return 0;
}
