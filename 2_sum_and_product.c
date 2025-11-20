#include <stdio.h>

// sum & product of two numbers
int main() {
    int num1, num2, sum, product;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    product = num1 * num2;
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    return 0;
}