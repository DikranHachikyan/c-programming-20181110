#include <stdio.h>

int main(int argc, char** argv) {
    char  s = 'A';
    int   m = 0;
    float d = 1.5;
    
    printf("s(char)=");
    scanf("%c", &s);
    
    printf("d(float)=");
    scanf("%f", &d);
    
    printf("m(int)=");
    scanf("%d", &m);
    
    printf("Values:\nd=%f\ts=%c\tm=%d\n\n", d, s, m);
    
    
    return 0;
}

