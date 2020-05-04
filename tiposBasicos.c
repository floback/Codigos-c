//  ==========                 ==========
//  ========== #helpdeskloback ==========
//  ==========                 ==========
// Operador de verificar o tamanho de um tipo oou variável!!
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//TIPO BÁSiCO INTEIROS
	printf("tamanho de armazenamento p/ tipo int: %d \n", sizeof(int));
	printf("tamanho de armazenamento p/ tipo short: %d \n", sizeof(short));
	printf("tamanho de armazenamento p/ tipo long: %d \n", sizeof(long));
	//TIPO bÁASICOS PONTO FLUTUANTE
	printf("tamanho de armazenamento p/ tipo float: %d \n", sizeof(float));
        printf("tamanho de armazenamento p/ tipo double: %d \n", sizeof(double));
        printf("tamanho de armazenamento p/ tipo long double: %d \n", sizeof(long double));

	
	return 0;
}

