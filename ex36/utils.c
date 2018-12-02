/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>

char getAnswer(const char *question){
    char ans = '#';
    
    printf("%s",question);
    do{
        scanf("%c",&ans);
    }
    while( ans == '\n');
    
    return ans;
}