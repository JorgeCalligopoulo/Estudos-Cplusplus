/* Lista 5_03.cpp : This file contains the 'main' function. Program execution begins and ends there.

3. Escreva um programa que declare um Array de inteiros e um ponteiro para
inteiros. Associe o ponteiro ao Array. Agora, some mais um (+1) a cada
posição do Array usando o ponteiro (use *).

*/

#include <iostream>

int vetor[11]{ 0,1,2,3,4,5,6,7,8,9,10 };
int* ponteiro;

int main()
{
	ponteiro = &vetor[0];

	std::cout << "\n _-_-_-_-_-_-_-_-_\n\n";

	for (int* i = ponteiro; i < &ponteiro[11]; i++)
	{
		std::cout << *i << "\t|" << i;
		*i = *i + 1;
		std::cout << " >> " << *i << "\t|" << i << "\n";
	}
	std::cout << "\n";
}

