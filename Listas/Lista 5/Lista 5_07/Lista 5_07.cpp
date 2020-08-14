/* Lista 5_07.cpp : This file contains the 'main' function. Program execution begins and ends there.

7. Escreva uma função recursiva que exibe todos os elementos em um array de
inteiros, separados por espaço.

*/

#include <iostream>

int const tam = 5;
int exibir(int lista[tam], int aux = 0);
int vetor[tam]{ 0,1,2,3,4 };


int main()
{
	exibir(vetor);
}

int exibir(int lista[tam], int aux)
{
	if (aux == tam - 1)
	{
		std::cout << lista[aux] << ' ';
		return(lista[aux]);
	}
	else
	{
		std::cout << lista[aux] << ' ';
		aux++;
		return(exibir(lista,aux));
	}
}
