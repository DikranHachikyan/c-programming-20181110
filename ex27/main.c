#include <stdio.h>
#include <stdlib.h>

/* по стойност */
void power2(int a){
    a *= a;
    printf("a=%d\n",a);
}
int main(int argc, char** argv) {
    int x = 2;
    
    power2(x);
    printf("x=%d\n", x);
    return 0;
}
