/* Lista 4_02.cpp : This file contains the 'main' function. Program execution begins and ends there.

Fa�a um programa que receba do usu�rio um vetor com 10 posi��es. Em
seguida dever� ser impresso o maior e o menor elemento do vetor.

*/

#include <iostream>

const int key = 10;
int vector[key];

int main()
{
	for (int i = 0; i < key; i++)
	{
		std::cout << "Digite um valor inteiro: ";
		std::cin >> vector[i];
	}

	int nmaior, nmenor; nmaior = nmenor = vector[0];
	for (int i = 0; i < key; i++)
	{
		nmaior = ((nmaior < vector[i]) * vector[i]) + ((nmaior >= vector[i]) * nmaior);
		nmenor = ((nmenor > vector[i]) * vector[i]) + ((nmenor <= vector[i]) * nmenor);
	}
	std::cout << "Maior: " << nmaior << std::endl << "Menor: " << nmenor;

}