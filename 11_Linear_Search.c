#include <stdio.h>

int main() {
    int n, i, search, found = 0;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    
    int arr[n]; 
    printf("Enter %d integers : \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter an integer to search : ");
    scanf("%d", &search);
    
    // result of linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            printf("%d is present at index %d\n", search, i);
            break;
        }
        else
            found = 0;
    }
    if(found == 0)
        printf("%d is not present in array\n", search);
    return 0;
}