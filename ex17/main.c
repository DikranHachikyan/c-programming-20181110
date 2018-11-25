#include <stdio.h>
#include <stdlib.h>
/**
 */

#define SIZE 10
#define SUMA(A,B) ( (A) + (B) )
#define PWR(A,B)  ( (SUMA(A,B)) * SUMA(A,B))

int main(int argc, char** argv) {
    int x = 5;
    int y = 3;
    
    float m = 4.5;
    float n = 7.2;
    
    int intRes     = SUMA(x,y);
    float floatRes = PWR(m,n);
    int pwrRes     = PWR(x,y);

#undef PWR
    
    printf("intRes = %d\n", intRes);
    printf("floatRes = %f\n", floatRes);
    printf("pwrRes = %d\n", pwrRes);
    printf("value of SIZE:%d\n", SIZE);
#undef SIZE
#define SIZE 30
    printf("value of SIZE:%d\n",SIZE);
    return 0;
}

