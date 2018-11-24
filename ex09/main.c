#include <stdio.h>
/**
 * 2 + 4 + ... + 98 + 100 = 2550
 */
int main(int argc, char** argv) {
    int suma = 0;
    int i = 0;
    
    while( i <= 4 ){
        i++;
        if( (i % 2) != 0 ) continue;
        suma += i;
    }
    
    printf("2+4+...+98+100=%d\n", suma );
    return 0;
}

