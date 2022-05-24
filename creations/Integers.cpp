#include <stdio.h>

//int = 10;
//double int = 10,11;
float pi = 3.1416;
//bool = 1;
//char = 'f';

int r = 0;
float A = 0;

int main(){
	printf("Introduzca el valor del radio  \n");
	scanf("%d", &r);
	A = pi*(r*r);
	printf("El valor del area es: %f", A);
}
