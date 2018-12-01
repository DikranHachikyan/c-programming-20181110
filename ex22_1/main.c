#include <stdio.h>
#include <stdlib.h>

/* Включване се прави САМО на хедър файл */
#include "math-functions.h"
#include "dummy.h"

int main(int argc, char** argv) {
    int x = 5;
   
    long factRes = fact(x);
    
    printf("%d! = %ld\n", x, factRes);
    
    return 0;
}
