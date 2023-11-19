#include <stdio.h>  
int main() {  
    // m1 and m2 are the 2d array(matrix) created. m3 will be the addition of those two.
    int m1[3][3] = {{7,3,4}, {2,9,6}, {1,2,-20}};  
    int m2[3][3] = {{3,8,8}, {11,5,9}, {15,15,38}};  
    int m3[3][3];  
  
    //addition is done using for loop
    int i, j;  
    for (i = 0; i < 3; i++) {  
        for (j = 0; j < 3; j++) {  
            m3[i][j] = m1[i][j] + m2[i][j];  
        }  
    }  

    //the result is printed using m3 
    printf("Result of addition: \n");  
    for (i = 0; i < 3; i++) {  
        for (j = 0; j < 3; j++) {  
            printf("%d ", m3[i][j]);  
        }  
        printf("\n");  
    }  
  
    return 0;  
}  
