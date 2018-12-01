#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int *p;
    int x;
    
    p = &x;    /*  & - адреса на*/
    *p = 100;  /*  * - на адрес */
    
    printf("x=%d address x=%p\n", x, &x);
    
    printf("value = %d address = %p\n", *p, p);
    
    return 0;
}
