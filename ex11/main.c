#include <stdio.h>
/**
 * 1 + 2 + 3 + ... + 99 + 100 = 5050
 */
int main(int argc, char** argv) {
    int suma = 0;
    int i = 0;
    
    for( i = 0 ; i <= 100 ; i++ ){
        suma += i; 
    }
    
    printf("1+2+...+99+100=%d\n", suma );
    return 0;
}

