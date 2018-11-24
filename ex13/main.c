#include <stdio.h>
#include <stdlib.h>
/**
 */
int main(int argc, char** argv) {
    int m[5];
    int i=0;
    
    for( i = 0; i < 5 ; i++ ){
        m[i] = rand() % 100;
    }
    
    printf("\nOutput:\n");
    for( i = 0 ; i < 5; i++ ){
        printf("m[%d]=%d | ", i, m[i]);
    }
    printf("\n");
    return 0;
}

