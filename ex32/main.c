#include <stdio.h>
#include <stdlib.h>
/**
 */
int main(int argc, char** argv) {
    int *p = NULL;
    int i = 0;
    unsigned int n = 0;
    
    do{
        printf("n=");
        scanf("%u", &n);
    }
    while( n == 0 || n > 10000);
    
    /* 1. заделяне на паметта */
    p = malloc( sizeof *p * n );
    
    /* 2. проверка */
    if( p == NULL ){
        printf("Memory allocation error!");
        exit(0);
    }
    
    /*3. използваме паметта */
    for( i = 0 ; i < n ; i++ ){
        *(p + i) = rand() % 100;
    }
    
    for( i = 0; i < n ; i++ ){
        printf("[%d]=>%d (%p)\n", i, *(p + i), (p + i));
    }
    
    /*4. освобождаваме паметта */
    if( p != NULL ){
        free(p);
    }
    return 0;
}