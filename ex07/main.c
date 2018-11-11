#include <stdio.h>

int main(int argc, char** argv) {
    int option = 0;
    
    printf("Enter:1. open, 2. new, 3.save,4 exit:");
    scanf("%d", &option);
    
    switch(option){
        case 1: printf("Open file\n");
                break;
        case 2: printf("New file\n");
                break;
        case 3: printf("save file\n");
                break;
        case 4: printf("exit\n");
                return 0;
        default: printf("Invalid option: %d\n"
                        "Valid options 1,2,3,4\n", option);
    }
    return 0;
}

