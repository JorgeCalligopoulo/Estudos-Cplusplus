/* Lista 4_10.cpp : This file contains the 'main' function. Program execution begins and ends there.

Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo
tipo do vetor. A função deverá preencher os elementos de vetor com esse
valor. Não utilize índices para percorrer o vetor, apenas aritmética de
ponteiros.

*/

#include <iostream>

const int tama = 5;

void batata(int vec[tama], int num);

int vetor[tama], p = 150;

int main()
{
	batata(vetor, p);

	for (int i = 0; i < tama; i++)
	{
		std::cout << vetor[i] << " ";
	}
	std::cout << std::endl;
}

void batata(int vec[tama], int num)
{
	for (int* i = &vec[0]; i < &vec[5]; *i++)
	{
		*i = num;
	}

}