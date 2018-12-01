#include <stdio.h>
#include <stdlib.h>

/* чрез указател (референция) */

int main(int argc, char** argv) {
    int x;
    double m;
    char c;
    
    int *ip;
    double *dp;
    char *cp;
    void *vp;
    
    printf("size of x:%lu\n", sizeof x);
    printf("size of m:%lu\n", sizeof m);
    printf("size of c:%lu\n", sizeof c);
    
    printf("size of ip:%lu\n", sizeof ip);
    printf("size of dp:%lu\n", sizeof dp);
    printf("size of cp:%lu\n", sizeof cp);
    printf("size of vp:%lu\n", sizeof vp);
    
    
    return 0;
}
