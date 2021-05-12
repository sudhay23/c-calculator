// Git/GitHub workshop: Hands on session
// Program: Calculator
// Author: Manav Patnaik

// Import required header files
#include <stdio.h>
#include <math.h>

// Calculator function to be written here
// Functionalities required:
// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Divide
// 5. Percentage
// 6. Exponentiation
// 7. Sine (sin)
// 8. Cosine (cos)
// 9. Tangent (tan)
// 10. Square root
// 11. Ceil
// 12. Floor
// 13. Absolute value
// 14. Natural exponent (e^x)

// Sample code for 1. Add
double add(double a, double b) {
    return a + b;
}

// Insert your code below

int main() {
    int choice;
    printf(
        "Welcome to the Cool Calculator program!\n\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "5. Percentage\n"
        "6. Exponentiation\n"
        "7. Sine\n"
        "8. Cosine\n"
        "9. Tangent\n"
        "10. Square Root\n"
        "11. Ceiling\n"
        "12. Floor\n"
        "13. Absolute value\n\n"
        "14. Natural Exponent\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            printf("\nEnter two numbers: \n");
            int a, b;
            scanf("%d%d", &a, &b);
            int result = a + b;
            printf("The sum is %d\n", result);
            break;

        case 2:
        case 3:
        case 4:
        case 5:

        // 6. Sine
        case 6:
            printf("\nEnter the angle in degrees: ");
            int angle;
            scanf("%d", &angle);

            // Convert degrees to radians
            double radians = angle / 180.0 * 3.14;
            double answer = sin(radians);

            printf("The sine value is %f", answer);
            break;

        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        default:
            printf("Invalid choice!");
    }
    return 0;
}
