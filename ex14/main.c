#include <stdio.h>
#include <stdlib.h>
/**
 */
int main(int argc, char** argv) {
    int m[5];
    int i = 0;
    int j = 0;
    int t = 0;
    
    printf("Input Array:\n");
    for( i = 0; i < 5 ; i++ ){
        m[i] = rand() % 100;
        printf("m[%d]=%d\n", i, m[i]);
    }
    /* Sort */
    for( i = 0; i < 4 ; i++){
        for( j = i + 1 ; j < 5 ; j++ ){
            if( m[i] > m[j]){
                /* размяна на местата */
                t    = m[i];
                m[i] = m[j];
                m[j] = t;
            }
        }
    }
    
    /* End Sort */
    printf("\nOutput:\n");
    for( i = 0 ; i < 5; i++ ){
        printf("m[%d]=%d\n", i, m[i]);
    }
    printf("\n");
    return 0;
}

