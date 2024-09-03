#include <stdio.h>

void main(){
	int a, b;
	
	printf("Dame valor para a:\n");
	scanf("%d", &a);
	printf("Dame un valor para b:\n");
	scanf("%d", &b);
	
	if(a > b)
		printf("a es mayor que b\n");
	else if(a == b)
		printf("a es igual a b\n");
	else 
		printf("a es menor que b\n");
}