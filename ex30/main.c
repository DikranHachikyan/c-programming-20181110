#include <stdio.h>
#include <stdlib.h>
/**
 */
void showArray( const int *array, int size){
    int i;

    for( i = 0 ; i < size ; i++ ){
        printf("[%d]=>%d\t", i, array[i]);
    }
    printf("\n");
}
int main(int argc, char** argv) {
    int m[5];
    int i = 0;
    int j = 0;
    int t = 0;
    
    printf("Input Array:\n");
    for( i = 0; i < 5 ; i++ ){
        m[i] = rand() % 100;
    }
    
    showArray(m, 5);
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
    showArray(m, 5);
    return 0;
}

