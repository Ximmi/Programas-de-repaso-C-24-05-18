#include <stdio.h>
//hacer un programa que imprima la secuencia de 1 hasta el entero recibido (versión 2)

int main(){

    int n;
    printf("Dame un numero \n");
    scanf("%d", &n);
    
    etiq:
    if(n){
      printf("%d\n", n--);
      goto etiq;
    }
}

