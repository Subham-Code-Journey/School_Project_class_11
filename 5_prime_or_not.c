#include <stdio.h>

int main() {
    int size = 25;
    int flag, odd[size], count_odd = 0,  even[100-size], count_even = 0;

    // Loop from 1 to 100
    for(int i = 1; i <= 100; i++) {
        if(i == 1) {
            printf("%d is not a prime number\n", i);
            continue;
        }
        flag = 0; // Assume number is prime
        
        // Check divisibility from 2 to i/2 or use there -1 
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1; // Not a prime
                break;
            }
        }
        if(flag == 0){
            odd[count_odd] = i;
            count_odd++;
        } 
        else {
            even[count_even] = i;
            count_even++;
        }
    }
    printf("\n%d Prime Numbers:\n", count_odd);
    for(int i = 0; i < count_odd; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n\n%d Non-Prime Numbers:\n", count_even);
    for(int i = 0; i < count_even; i++) {
        printf("%d ", even[i]);
    }
    return 0;
}
