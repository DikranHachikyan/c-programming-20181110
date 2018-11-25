#include <stdio.h>
#include <stdlib.h>

int value = 10; /* глобална променлива т.е. "вижда се" от всички отчки в програмата */
/* декларация на функция */
int suma(int a, int b){
    /* int c =value ;  локална променлива т.е. достъпна е само във функцията */
    int c;
    
    c = a + b;
    
    return c;
}

int main(int argc, char** argv) {
    int x = 5;
    int y = 7;
    
    int sumRes = suma( x, y);
    
    printf("sumRes = %d\n", sumRes);
    
    return 0;
}

