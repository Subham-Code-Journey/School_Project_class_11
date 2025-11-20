#include <stdio.h>

// recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Test the recursive factorial function
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else 
        printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}