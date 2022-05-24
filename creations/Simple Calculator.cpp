//Include libraries
#include <stdio.h>
#include <math.h>

float A, B, Sum, Resta, Multiplication, Division;

int main(){
	printf("Simple calculator \n"); //Print the program name
	printf("Put the frist number \n");  //Type the frist number
		scanf("%f", &A);                //scan what number we put
	printf("Put the second number \n");//Type the frist number
		scanf("%f", &B); //scan what number we put
	
	//Operaciones
	Sum = A+B;
	Resta = A-B;
	Multiplication = A*B;
	Division = A/B;
	
	//Impresiones
printf("The value of Sum is: %f \n", Sum);
printf("The value of Resta is: %f \n", Resta);
printf("The value of Multiplication is: %f \n", Multiplication);
printf("The value of Division is: %f \n", Division);

	return 0;
}
