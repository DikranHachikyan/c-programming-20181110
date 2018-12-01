#include <stdio.h>
#include <stdlib.h>

/* чрез указател (референция) */
void power2(int *a){
    (*a) *= (*a);
    printf("a=%d address:%p\n", *a, a);
}
int main(int argc, char** argv) {
    int x = 2;
    
    power2(&x);
    printf("x=%d address:%p\n", x, &x);
    return 0;
}
