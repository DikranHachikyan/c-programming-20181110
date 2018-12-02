
#include <stdio.h>
#include <stdlib.h>
/**
 */
#define SIZE 5
int main(int argc, char** argv) {
    int *p = NULL;
    int i = 0;
    
    /* 1. заделяне на паметта */
    p = malloc( sizeof *p * SIZE );
    
    /* 2. проверка */
    if( p == NULL ){
        printf("Memory allocation error!");
        exit(0);
    }
    
    /*3. използваме паметта */
    for( i = 0 ; i < SIZE ; i++ ){
        *(p + i) = rand() % 100;
    }
    
    for( i = 0; i < SIZE ; i++ ){
        printf("[%d]=>%d (%p)\n", i, *(p + i), (p + i));
    }
    
    /*4. освобождаваме паметта */
    if( p != NULL ){
        free(p);
    }
    return 0;
}

//int alloc(){
//    exit(0);
//}
