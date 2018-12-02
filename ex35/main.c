#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

struct Point{
    int x;
    int y;
};

int main(int argc, char** argv) {
    struct Point p1;
    
    p1.x = 10;
    p1.y = 12;
    
    printf("Point (%d,%d)\n", p1.x, p1.y);
    
    printf("addr:%p x:%p y:%p\n", &p1, &p1.x, &p1.y);
    
    return 0;
}