#include <stdio.h>
#include <math.h> // biblioteca para potencias

void main(){
	//formula f = g(m1*m2)/r^2
	float f, r, g, m1, m2;
	
	printf("Introduzca el valor de g: ");
	scanf("%f", &g);
	
	printf("Introduzca el valor de m1:\n");
	scanf("%f", &m1);
	
	printf("Introduzca el valor de m2:\n");
	scanf("%f", &m2);
	
	printf("Introduzca el valor de r:\n");
	scanf("%f", &r);
	
	f=g*(m1*m2)/pow(r,2);//pow(variable,potecia)
	
	printf("El resultado de la funcion es: %f\n", f);
}