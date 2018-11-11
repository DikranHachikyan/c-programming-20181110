#include <stdio.h>

int main(int argc, char** argv) {
    int a = 2;
    int b = 0;
    
    /*
     * 1. b = a
     * 2. a++
     */
    b = a++;
    printf("b=%d a=%d\n", b, a);
    
    a = 2;
    
    /**
     * 1. ++a
     * 2. b = a 
     */
    b = ++a;
    printf("b=%d a=%d\n", b, a);
    
    printf("1. a = %d", ++a);
    return 0;
}

