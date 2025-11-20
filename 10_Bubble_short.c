#include <stdio.h>

void swap(int *a, int *b);
void bubble_sort(int arr[], int n);
void print_array(int arr[], int size);
void scan_array(int arr[], int size);

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[10];
    scan_array(arr, n);
    
    printf("Unsorted array: \n");
    print_array(arr, n);
    
    bubble_sort(arr, n);
    
    printf("Sorted array: \n");
    print_array(arr, n);
    
    return 0;
}

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void scan_array(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}