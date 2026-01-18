#include <stdio.h>

int multiply_matrix();
int calculation(int rowA, int colA, int rowB, int colB, int A[rowA][colA], int B[rowB][colB], int prod[rowA][colB]);
int matrix_scan(int rowA, int colA, int rowB, int colB, int A[rowA][colA], int B[rowB][colB]);
void scaning_matrix(int row, int col, int matrix[row][col]);
void display_array(int arr[]);
void scan_array(int arr[], int size);
void overview(int arr[]);
void product_overview(int rowA, int colB);

void display_array(int arr[]) {
    for(int i = 0; i < arr[0]; i++) {
        printf("[");
        for(int j = 0; j < arr[1]; j++) {
            printf(" %d%d ", i, j);
        }
        printf("]\n");
    }
    printf("\n");
}
void scan_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
void overview(int arr[]) {
    /*
        if row --> 3 and coloumn --> 2
        then array will be like this --> arr[3,2] = {3,2}
        [00 01]
        [10 11]
        [20 21]
            ^
            | 
        So, that is the type pf indexing we are using here.
    */
    printf("%d x %d\n", arr[0], arr[1]);
    display_array(arr);
}
void product_overview(int rowA, int colB) {
    printf("Product Matrix [C]: %d x %d\n", rowA, colB);
    int arr[2] = {rowA, colB};
    display_array(arr);
}
void scaning_matrix(int row, int col, int matrix[row][col]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
int matrix_scan(int rowA, int colA, int rowB, int colB, int A[rowA][colA], int B[rowB][colB]) {
    int matrixA[2] = { rowA, colA };
    int matrixB[2] = { rowB, colB };

    // overview of the matrices
    printf("Matrix [A]: ");
    overview(matrixA);

    // Input for first matrix
    printf("Enter the elements of matrix [A]: \n");
    scaning_matrix(rowA, colA, A);
    
    printf("\n\n");

    // overview of the matrices
    printf("Matrix [B]: ");
    overview(matrixB);

    // Input for second matrix
    printf("Enter the elements of matrix [B]: \n");
    scaning_matrix(rowB, colB, B);

    printf("\n\n");

    // overview of the product matrix
    product_overview(rowA, colB);
    printf("\n");
    return 0;
}
int calculation(int rowA, int colA, int rowB, int colB, int A[rowA][colA], int B[rowB][colB], int prod[rowA][colB]) {
    // Multiplying the matrices
    for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colB; j++) {
            prod[i][j] = 0; // initialize before accumulation
            for(int k = 0; k < colA; k++) {
                int prev = prod[i][j];
                prod[i][j] += A[i][k] * B[k][j];
                // debugging print statement
                //  printf("Intermediate sum for C[%d][%d]: %d + %d * %d = %d\n",/
                //  i, j, prev, A[i][k], B[k][j], prod[i][j]);
            }
        }
    }

    // Displaying the product matrix
    printf("Product Matrix [C]: \n");
    for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colB; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int multiply_matrix() {
    int n = 2;
    int matrixA[n], matrixB[n];

    // Input for first matrix
    printf("Enter the Row & coloumn of matrix [A] : \n");
    scan_array(matrixA, n);

    printf("Enter the Row & coloumn of matrix [B] : \n");
    scan_array(matrixB, n);

    // cheak the product of two matrix exists or not
    if (matrixA[1] != matrixB[0])
        printf("Matrix multiplication not possible.\n");
    int A[matrixA[0]][matrixA[1]];
    int B[matrixB[0]][matrixB[1]];
    matrix_scan(matrixA[0], matrixA[1], matrixB[0], matrixB[1], A, B);
    
    int product[matrixA[0]][matrixB[1]];
    // calculating the product of two matrix
    calculation(matrixA[0], matrixA[1], matrixB[0], matrixB[1], A, B, product);
    return 0;
}