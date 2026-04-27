/*
	Name: Ex3_p1.cpp
	Author: Giovanni Tonsa
	Date: 27/04/26 10:54
	Description: Programa verificar se é possivel formar um triangulo e classifica - lo
*/

# include <stdio.h>
#include <cstdlib>

//Declaração da prototipação
int verificarTriangulo(float, float, float);
void FormatoTriangulo(float, float, float);

main()
{
	float x = 0.0;
	float y = 0.0;
	float z = 0.0;
	
	puts("Digite 3 valores de comprimento");
	printf("1 valor: "); scanf("%f", &x);
	printf("2 valor: "); scanf("%f", &y);
	printf("3 valor: "); scanf("%f", &z);
	
	verificarTriangulo(x, y, z);
	FormatoTriangulo(x, y, z);
}

//função para verificar o triangulo
int verificarTriangulo(float x, float y, float z)
{
	if(x + y > z && z + y > x && x + z > y)
		printf("Eh um triangulo\n");
	else
		printf("Nao eh um triangulo\n");
	exit(0);
}

//Função para classificar os comprimentos de um triangulo
void FormatoTriangulo(float x, float y, float z)
{
	if(x == y && y == z)
		puts("Seu triangulo eh Equilatero");
	else if (x != y && y != x && z != y && z != x)
			puts("Seu triangulo eh Escaleno");
		else
			puts("Seu triangulo eh Isosceles");
}
