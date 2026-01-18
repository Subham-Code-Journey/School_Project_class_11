/*
        *
       **
      ***
     ****
    *****
   ****
  ***
 **
*

*/
#include <stdio.h>

int main(){
    int rows;
    printf("Enter the Pattan number : ");
    scanf("%d", &rows); 
    
    for (int i = 1; i <= 2*rows - 1; ++i) {
        if(i <= rows) {
            for (int space = 1; space <= rows - 1; ++space) printf(" ");
            for (int space = 1; space <= rows - i; ++space) printf(" ");
            for (int j = 1; j <= i; ++j) printf("*");
        }else {
            for (int space = 2*rows - i - 1; space != 0; --space) printf(" ");
            for (int j = 1; j <= 2*rows - i; ++j) printf("*");
        }
        printf("\n");
    }

    return 0;
}