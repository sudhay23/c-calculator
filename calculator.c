// Git/GitHub workshop: Hands on session
// Program: Calculator
// Author: Manav Patnaik

// Import required header files
#include <stdio.h>
#include <math.h>

// Calculator function to be written here
// Functionalities required:
// 1. Addition
void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
} 

// Fill the rest of the functionality here!
// 2. Subtract
// 3. Multiply
// 4. Divide
// 5. Percentage
// 6. Exponentiation

// 7. Sine (sin)
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);

    printf("The sine value is %f", answer);
}

// Fill the rest of the functionality here!
// 8. Cosine (cos)
// 9. Tangent (tan)
// 10. Square root
// 11. Ceil
// 12. Floor
// 13. Absolute value
// 14. Natural exponent (e^x)

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
            calcAddition();
            break;

        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;

        case 6:
            break;
            
        // 7. Sine
        case 7:
            calcSine();
            break;
            
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
        case 14:
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}
