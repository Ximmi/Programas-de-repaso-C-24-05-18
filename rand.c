#include <stdio.h>
#include <stdlib.h>
//hacer un programa que imprima numeros aleatorios

int main(){

    char n;
    printf("Dame un caracter \n");
    n=getchar();    
    
    srand(n);
    rand();
    printf("%d\n", rand());
}

