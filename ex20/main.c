#include <stdio.h>
#include <stdlib.h>

int value = 10; /* глобална променлива т.е. "вижда се" от всички отчки в програмата */

/**
 * Прототип на функция (Декларация на функцията)
 */
int suma(int, int);

int main(int argc, char** argv) {
    int x = 5;
    int y = 7;
    
    int sumRes = suma( x, y);
    
    printf("sumRes = %d\n", sumRes);
    
    return 0;
}

/* Дефиниция на функция */
int suma(int a, int b){
    /* int c =value ;  локална променлива т.е. достъпна е само във функцията */
    int c = 0;
    
    c = a + b;
    
    return c;
}