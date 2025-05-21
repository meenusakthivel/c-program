#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double fahrenheit, celsius;

    // Prompt user for input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert and display result
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}