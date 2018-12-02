#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

struct Point{
    int x;
    int y;
};

int main(int argc, char** argv) {
    struct Point *p = NULL;
    
    p = malloc( sizeof *p);
    
    if( p == NULL ){
        printf("Malloc error!\n");
        exit(0);
    }
    
    p->x = 10;
    p->y = 20;
    
    printf("(%d,%d)\n", p->x, p->y);
    printf("addr: %p x:%p y%p\n", &p, &p->x, &p->y);
    
    free(p);
    
    return 0;
}