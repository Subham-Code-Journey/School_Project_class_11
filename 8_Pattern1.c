/*
10101
0101
101
01
1
*/
#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows-i; j++){
            if((i+j)%2==0){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}