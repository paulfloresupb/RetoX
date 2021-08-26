#include <stdio.h>
#include <stdlib.h>

void funcPrint(void);
void funcAl1(void);

int main(void){
    funcPrint();    
    funcAl1();
    return EXIT_SUCCESS;
}

void funcPrint(void){
    printf("Hello\n");
}

void funcAl1(void){
    printf("Fun1\n");
    printf("chao\n");
}