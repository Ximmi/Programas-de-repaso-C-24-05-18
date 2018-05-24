#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//hacer un programa que imprima numeros del 1 al 6 a partir de un time aleatorio

int main(){

    srand(time(NULL));
    rand();
    printf("%d\n", ((rand())%6)+1);
}

