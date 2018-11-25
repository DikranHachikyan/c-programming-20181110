/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * 
 * Сорс файл:
 * Дефиниции на:
 * 1. Функции
 * 
 * Може да има:
 * 1. глобални променливи, макроси, типове данни, константи и т.н. , но
 *    те ще са достъпни САМО тук т.е. локални за сорс файла
 */
/* Дефиниция на функция */
int suma(int a, int b){
    /* int c =value ;  локална променлива т.е. достъпна е само във функцията */
    int c = 1;
    
    c = a + b;
    
    return c;
}
