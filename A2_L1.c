#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	// exercicio 1
	printf("exercicio 1\n\a");
	float num1, num2, num3, num4;
	int nun1, nun2, nun3, nun4;
	
	printf("digite um numero:");
	scanf("%f", &num1);
	fflush(stdin);
	num2 = num1 * 2;
	printf("%.2f * 2 = %.2f\n\n", num1, num2);
	
	
	//exercicio 2
	printf("exercicio 2\n\a");
	printf("digite um numero:");
	scanf("%f", &num1);
	fflush(stdin);
	printf("\ndigite um numero:");
	scanf("%f", &num2);
	fflush(stdin);
	
	num3 = (num1 + num2) / 2;
	
	printf("%.2f + %.2f / 2 = %.2f\n\n", num1, num2, num3);
	
	//exercicio 3
	printf("exrcicio 3\n\a");
	printf("digite uma metragem:");
	scanf("%f", &num1);
	fflush(stdin);
	
	num2 = num1 *100;
	
	printf("%.0fm --> %.0fcm\n\n", num1, num2);
	
	//exercicio 4
	printf("exercicio 4\n\a");
	printf("ano de nascimento:");
	scanf("%f", &num1);
	fflush(stdin);
	
	num2 = (2026 - num1);
	num3 = num2 *365;
	
	printf("%.0f anos ---> %.0f dias\n\n", num2, num3);
	
	//exercicio 5
	printf("exercicio 5\n");
	printf("digite um numero:");
	scanf("%i", &nun1);
	fflush(stdin);
	printf("\ndigite um numero:");
	scanf("%i", &nun2);
	fflush(stdin);
	
	nun3 = nun1 / nun2;
	nun4 = nun1 % nun2;
	
	printf("%i / %i = %i resto %i\n\n", nun1, nun2, nun3, nun4);
	
	//exercicio 6
	printf("exercicio 6\n");
	
	return 0;
}