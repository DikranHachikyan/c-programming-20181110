#include <stdio.h>

enum{
    OPEN=1,
    NEW,
    SAVE,
    SAVEAS,
    EXIT
};
int main(int argc, char** argv) {
    int option = 0;
    
    printf("Enter:%d. open, %d. new, %d.save,%d save as, %d exit:",
            OPEN,NEW,SAVE,SAVEAS,EXIT);
    
    scanf("%d", &option);
    
    switch(option){
        case OPEN:   printf("Open file\n");
                   /*break;*/
        case NEW:    printf("New file\n");
                   /*break;*/
        case SAVE:   printf("save file\n");
                   /*break;*/
        case SAVEAS: printf("save as...\n");
                     break;
        case EXIT: printf("exit\n");
                return 0;
        default: printf("Invalid option: %d\n"
                        "Valid options 1,2,3,4\n", option);
    }
    return 0;
}

