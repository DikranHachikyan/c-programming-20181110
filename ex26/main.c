#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m[5] = {10,23,45,67,41};
    int *p;
    int i;
    
    printf("start from address:%p\n",m);
    for( i = 0; i < 5; i++){
        printf("m[%d]=%d address:%p\n", i, *(m + i), (m+i));
        /* m++; началният адрес не може да се мести */
    }
    printf("end at address:%p\n",m);
    
    return 0;
}
