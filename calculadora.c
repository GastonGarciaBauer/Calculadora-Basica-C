#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int op;
	float num1, num2, resultado;
	
	do{
		op = 0;
		printf("\n Ingrese un numero: ");
		scanf("%f", &num1);
	
	
		printf("\n Ingrese otro numero: ");
		scanf("%f", &num2);
		
		printf("\n Ingrese operacion a realizar: \n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n");
		printf("\n");
		scanf("%d", &op);
		
	
		switch(op){
			case 1:
				resultado = num1 + num2;
				break;
			case 2:
				resultado = num1 - num2;
				break;
			case 3:
				resultado = num1 * num2;
				break;
			case 4:
				resultado = num1 / num2;
				break;
		}
	
		system("cls");
		printf("\n El resultado de la operacion es: %0.2f \n", resultado);
		printf("\n\n Desea realizar otra operacion? \n 1. SI \n 2. NO \n\n");
		scanf("%d", &op);
		system("cls");
	}
	while(op == 1);
	
	return 0;	
}