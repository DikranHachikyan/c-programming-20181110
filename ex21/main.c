#include <stdio.h>
#include <stdlib.h>

/* Включване се прави САМО на хедър файл */
#include "math-functions.h"

int main(int argc, char** argv) {
    int x = 5;
    int y = 7;
    
    int sumRes = suma( x, y);
    
    printf("sumRes = %d\n", sumRes);
    
    return 0;
}
