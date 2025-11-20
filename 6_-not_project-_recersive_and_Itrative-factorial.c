#include <stdio.h>

// recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Itrative main function to test the factorial function
void Itractive_factorial() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = 1;
        for (int i = 2; i <= number; i++) {
            result *= i;
        }
        printf("Factorial of %d is %d\n", number, result);
    }
}

int main() {
    // Test the recursive factorial function
    {
        int number;
        printf("Enter a positive integer: ");
        scanf("%d", &number);
        if (number < 0) {
            printf("Factorial is not defined for negative numbers.\n");
        } else {
            printf("Factorial of %d is %d\n", number, factorial(number));
        }
    }
    // Test the iterative factorial function
    Itractive_factorial();
    return 0;
}