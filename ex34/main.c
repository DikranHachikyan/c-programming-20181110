#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

int main(int argc, char** argv) {
    int *array = NULL;
    int *tmp = NULL;
    
    int count = 0;
    int i = 0;
    int randomNumber = 0;
    char answer = 'n';
    
    do{
        randomNumber = rand() % 100;
        printf("Random Number:%d.", randomNumber);
        answer = getAnswer( "Add?(y/n):");
        if(answer == 'y' || answer == 'Y'){
            tmp = realloc( array, sizeof *array * (count + 1));
            if( tmp != NULL ){
                /* ОК */
                *(tmp + count) = randomNumber;
                count++;
                array = tmp;
            }
            else{
                /* tmp == NULL */
                printf("Out of memory!\n");
                break;
            }//if( tmp != NULL
        }//if( answer ...
        answer = getAnswer("Generate Next Random?(y/n):");
    }
    while(answer == 'y' || answer == 'Y' );
    
    printf("\nRandom numbers:\n");
    for( i = 0 ; i < count; i++ ){
        printf("[%d]=>%d\n", i, *(array + i ) );
    }
    
    /* !!! */
    if(array != NULL){
        free(array);
    }
    
    return 0;
}