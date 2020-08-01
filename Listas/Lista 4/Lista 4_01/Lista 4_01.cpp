/* Lista 4_01.cpp : This file contains the 'main' function. Program execution begins and ends there.

Ler um conjunto de números reais, armazenando-o em vetor e calcular o
quadrado das componentes deste vetor, armazenando o resultado em outro
vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.

*/

#include <iostream>

const int key = 10;
int vetor[key],vetorR[key],num;

int main()
{
	for (int i = 0; i < key; i++) // le um conjunto de numeros
	{
		std::cout << "Digite um valor inteiro: ";
		std::cin >> num;
		vetor[i] = num;
	}
	
	for (int i = 0; i < key; i++) // atualiza os lavores do vetor para que todos sejam ao quadrado
	{
		vetorR[i] = vetor[i] * vetor[i];
		std::cout << vetorR[i] << " ";
	}
	std::cout << std::endl;
}

