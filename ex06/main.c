#include <stdio.h>

int main(int argc, char** argv) {
    
    float firstValue = 0;
    float secondValue = 0;
    float result = 0;
    
    printf("First Value=");
    scanf("%f", &firstValue);
    
    printf("Second Value=");
    scanf("%f", &secondValue);
    
    if( secondValue != 0){
        result = firstValue / secondValue;
        printf("%f / %f = %f\n", firstValue, secondValue, result);
    }
    else{
        printf("Invalid second value:%f\n", secondValue);
    }
    
    return 0;
}

