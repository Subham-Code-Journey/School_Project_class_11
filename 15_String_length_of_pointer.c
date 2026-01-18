#include <stdio.h>

// claculate string length using pointer
int main() {
    int length = 0;
    char str[100];
    char *ptr = str;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (*ptr != '\0') {
        length++;
        // printf("Current character: %c, Length: %d\n", *ptr, length);
        ptr++;
    }

/*
    length++;
    ptr++;
    printf("Current character: %c, Length: %d\n", *ptr, length);
    length++;
    ptr++;
    printf("Current character: %c, Length: %d\n", *ptr, length);
    length++;
    ptr++;
    printf("Current character: %c, Length: %d\n", *ptr, length);
    printf("\n\nLength of the string is: %d\n", length - 1); // subtract 1 to exclude newline character
*/

    printf("Length of the string is: %d\n", length - 1); // subtract 1 to exclude newline character
    return 0;
}