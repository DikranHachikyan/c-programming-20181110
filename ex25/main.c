#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m[5] = {10,23,45,67,41};
    int *p;
    int i;
    
    p = m; /* същото като  p = &m[0];  */
    
    printf("start from address:%p\n",p);
    for( i = 0; i < 5; i++){
        printf("m[%d]=%d\n", i, p[i]);
    }
    printf("end at address:%p\n",p);
    
    return 0;
}
