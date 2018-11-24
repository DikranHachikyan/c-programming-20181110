#include <stdio.h>
/**
 * 1 + 2 + 3 + ... + 99 + 100 = 5050
 */
int main(int argc, char** argv) {
    int suma = 0;
    int i = 0;
    
    while( i <= 100 ){
        suma += i; /* suma = suma + i */
        i++;      /* без този ред получаваме безкраен цикъл */
        
    }
    
    printf("1+2+...+99+100=%d\n", suma );
    return 0;
}

