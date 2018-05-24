#include <stdio.h>

void asteriscos(int n);
void triangulo(int n);
void triangulo2(int n);
int main(){

    int n;
    printf("Dame un numero \n");
    scanf("%d", &n);
    triangulo(n);
    triangulo2(n);
}

void asteriscos(int n){
    int i;
    for(i=1; i<=n; i++)
        putchar('*');
}

void triangulo(int n){
    int i;
    for(i=1; i<=n; i++){
        asteriscos(i);
        putchar('\n');
    }
}

void triangulo2(int n){
    int i;
    for(i=n-1; i>0; i--){
        asteriscos(i);
        putchar('\n');
    }
}
