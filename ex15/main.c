#include <stdio.h>
#include <stdlib.h>
/**
 */
int main(int argc, char** argv) {
    int matrix[3][3] = {
          {1,4,7} /* row 0*/
        , {2,9,3} /* row 1*/
        , {8,6,5} /* row 2*/
    };
    int row = 0; 
    int col = 0;
    
    for( row = 0 ; row < 3; row++ ){
        for( col = 0 ; col < 3; col++ ){
            printf("matrix[%d][%d]=%d\t", row, col, matrix[row][col]);
            
        }
        printf("\n");
    }
    
    return 0;
}

