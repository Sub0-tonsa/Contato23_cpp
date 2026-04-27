/*
	Name: Ex4_p1.cpp
	Author: Giovanni Tonsa
	Date: 27/04/26 11:42
	Description: Programa para receber uma string e imprimir ao contrário subtraindo as letras a, j, p, v.
*/

# include <stdio.h>

//Declaração da prototipação
void imprimirContrario(char []);

main()
{
	char texto[20];
	puts("Imrprimindo o texto ao contrario: ");
	printf("Digite o texto: ");
	gets(texto);
	
	imprimirContrario(texto);
}

//função para imprimir o texto ao contrario
void imprimirContrario(char texto[])
{
	int cont;
	for(cont = 0; texto[cont] != '\0'; cont++)
	{}
	puts("==============================");
	
	for(cont; cont >= 0; cont--)
	{
		if(texto[cont] != 'a' && texto[cont] != 'j' && texto[cont] != 'p' && texto[cont] != 'v')
		   printf("%c|", texto[cont]);
	}
}
