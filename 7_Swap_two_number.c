#include <stdio.h>

// swap two number useing pointer

void swap(int *a, int *b) {
    int temp;
    temp = *a;   // store value of a in temp
    *a = *b;     // assign value of b to a
    *b = temp;   // assign value of temp to b
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2); // passing addresses

    printf("After swapping:  num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
