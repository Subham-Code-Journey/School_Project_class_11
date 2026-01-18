// #include <stdio.h>
// #include <stdlib.h>


/*void string_to_array(char str[], int numbers[], int *numCount) {
    *numCount = 0;  // count of numbers found
    int i = 0;
    // extract numbers from the string
    
    while (str[i] != '\0') {
        if (isdigit(str[i])) {
            int value = 0;

            // build the number
            while (isdigit(str[i])) {
                value = value * 10 + (str[i] - '0');
                i++;
            }

            numbers[numCount++] = value;
        } else {
            i++;
        }
    }

    // print the numbers
    // print the numbers
    printf("Extracted integers: ");
    for (i = 0; i < *numCount; i++) {
        printf("%d ", numbers[i]);
    }
}

// GCD (Greatest Common Divisor) program

int main() {
    char str[200];
    int numbers[100];
    int numCount;

    printf("Enter the GCD Number : ");
    scanf("%[^\n]", str);
    string_to_array(str, numbers, &numCount);
    
    return 0;
}*/
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}


/*

int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d", &num1);

    int arr[num1];
    // scanf("%d %d", &num1, &num2);

    
    for(int i=0; i<num1; i++){
        scanf("Enter two numbers : %d", &arr[i]);
    }

*/