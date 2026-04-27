/*
	Name: Ex2_p1.cpp
	Author: Giovanni Tonsa
	Date: 27/04/26 10:11
	Description: Programa para calculara o peso ideal, para homens e mulheres
*/

# include <stdio.h>

//Declaração da prototipação
float calcularPesoIdeal(char, float);
float compararPesoIdeal (float, float);

main()
{
	char sexo = ' ';
	float alt = 0.0;
	float pesoIdeal = 0.0;
	float seuPeso = 0.0;
	
	puts("Calculo do peso ideal de uma pessoa: ");
	printf("Sexo: "); scanf("%c", &sexo);
	printf("Altura: "); scanf("%f", &alt);
	
	pesoIdeal = calcularPesoIdeal(sexo, alt);
	
	printf("Seu peso ideal eh: %.3f kg", pesoIdeal);
	printf("\nQual o seu peso? "); scanf("%f", &seuPeso);
	
	compararPesoIdeal(pesoIdeal, seuPeso);
}

//função para calcular o peso idela de uma pessoa
float calcularPesoIdeal(char sexo, float alt)
{
	float peso;
	if(sexo == 'M' || sexo == 'm')
		peso = 72.7 * alt - 58;
	else if(sexo == 'F' || sexo == 'f')
		peso = 62.1 * alt - 44.7;
	else
		puts("Sexo invalido!!");
		
	return peso;
}

float compararPesoIdeal (float seuPeso, float pesoIdeal)
{
	float Peso = 0.0;
	
	if(seuPeso > pesoIdeal)
	{
		Peso = seuPeso - pesoIdeal;
		printf("Voce precisa ganhar %.3f kg para chegar no seu peso ideal!!", Peso);
	}
	else if(seuPeso < pesoIdeal)
	{
		Peso = pesoIdeal - seuPeso;
		printf("Voce precisa perder %.3f kg para chegar no seu peso ideal!!", Peso);
	}
	else
		puts("Voce chegou no seu peso ideal");
}
