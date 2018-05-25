#include <stdio.h>

void abajo(int n);
void arriba(int n);
int main() {
	
	int i, n, j,kk, pop;

	printf("\tSeleccione el numero de n asteriscos\t\n");
	scanf("%d",&n);
	arriba(n);
	abajo(n);

	return 0;
}

void abajo(int n){
	int i, j, k1, k2;
	for(i=1;i<=n; i++){

	for(k1=0; k1<=i;k1++){
	printf("   ");
	}
	
	for(j=n;j>=i; j--){
			printf(" * ");	
	}
	
	for(k2=n; k2>i;k2--){
	printf(" * ");
	} 	
	
	printf("\n");
	}
}

void arriba(int n){
	int i, j, k1, k2;
	for(i=n;i>0; i--){
	
	for(k1=0; k1<=i;k1++){
	printf("   ");
	}
	
	for(j=n;j>=i; j--){
			printf(" * ");	
	}
	
	for(k2=n; k2>i;k2--){
	printf(" * ");
	} 
	
	printf("\n");
	}
}

