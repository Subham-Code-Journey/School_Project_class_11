#include <stdio.h>

// hermonic progration
int main() {
    int a, d, n;
    // first term(a)
    a = 1;
    // common difference(d)
    d = 1;
    float sum = 0.0;
    printf("Enter the number of terms(n): ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        sum += 1.0 / (a + i * d);
    }
    printf("Sum of the harmonic progression: %.2f\n", sum);
    return 0;
}