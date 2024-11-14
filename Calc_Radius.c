#include <stdio.h>
#include <math.h>  // To use the constant M_PI for π

int main() {
    float radius, area, circumference;

    // Prompt the user for input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);  // Read the radius

    // Calculate the area and circumference
    area = M_PI * radius * radius;  // Area = π * r^2
    circumference = 2 * M_PI * radius;  // Circumference = 2 * π * r

    // Print the results
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
}