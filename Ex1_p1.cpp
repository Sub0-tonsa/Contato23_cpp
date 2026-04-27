/*
	Name: Ex1_p1.cpp
	Author: Giovanni tonsa
	Date: 27/04/26 09:48
	Description: Programa para calculara quantos dias uma pessoa ja viveu
*/

# include <stdio.h>

// Declaração das protitipação
int calcularDias(int, int, int);

main()
{
	int dias, meses, anos, totaldias;
	dias = meses = anos = totaldias = 0;
	
	puts("Qunatos anos , meses, anos voce ja viveu? ");
	printf("Anos: ");
	scanf("%d", &anos);
	printf("Meses: ");
	scanf("%d", &meses);
	printf("Dias: ");
	scanf("%d", &dias);
	
	totaldias = calcularDias(anos, meses, dias);
	
	printf("Voce ja viveu %d dias", totaldias);
}

//função para calcular a idade de vida de uma pessoa
int calcularDias(int anos, int meses, int dias)
{
	return (anos * 365) + (meses * 30) + dias;
}
