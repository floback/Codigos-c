//  ==========                 ==========
//  ========== #helpdeskloback ==========
//  ==========                 ==========
//scanf = leia o que foi digiado 
//"%d", &num1 = scanf armazena o numero digiado na variavel num1
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num1, num2, soma;
	
	printf ("Digite o primeiro numero:\n");
	scanf ("%d", &num1);
	printf ("Digite o segundo numero:\n");
	scanf ("%d", &num2);

	soma = num1 + num2;

	printf("Soma:\n %d \n", soma);
}
 
