#include <stdio.h>

float calculateDiameter(float radius);
float calculateCircumference(float radius);
float calculateArea(float radius);

int main() {
    float radius, diameter, circumference, area;

    // Ask user to enter radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate diameter, circumference and area of the circle
    diameter = calculateDiameter(radius);
    circumference = calculateCircumference(radius);
    area = calculateArea(radius);

    // Display the results
    printf("Diameter = %.2f units\n", diameter);
    printf("Circumference = %.2f units\n", circumference);
    printf("Area = %.2f sq. units\n", area);

    return 0;
}

// Function to calculate diameter of circle
float calculateDiameter(float radius) {
    return 2 * radius;
}

// Function to calculate circumference of circle
float calculateCircumference(float radius) {
    return 2 * 3.14159 * radius;
}

// Function to calculate area of circle
float calculateArea(float radius) {
    return 3.14159 * radius * radius;
}

