#include <stdio.h>

int main(int argc, char** argv) {

    int     intValue = 0;
    char   charValue = ' ';
    float floatValue = 1;
    
    printf("Enter an integer:");
    scanf("%d", &intValue);
    
    printf("Enter a character:");
    do{
        scanf("%c", &charValue);
    }
    while(charValue == '\n');
    
    printf("Enter a float value:");
    scanf("%f", &floatValue);
    
    printf("int: %d char: %c float: %f\n", intValue, charValue, floatValue);
    
    return 0;
}

