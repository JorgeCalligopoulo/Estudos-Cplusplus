/* Lista 4_03.cpp : This file contains the 'main' function. Program execution begins and ends there.

Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 * i) % (i
+ 1), sendo i a posição do elemento no vetor. Em seguida imprima o vetor na
tela.

*/

#include <iostream>

void popular(int vetor[]);

const int vexsize = 50;
int vex[vexsize];

int main()
{
	popular(vex);

	for (int i = 0; i < vexsize; i++)
	{
		std::cout << vex[i] << " | ";
	}
	std::cout << std::endl;
}

void popular(int vetor[])
{
	for (int i = 0; i < vexsize; i++)
	{
		vetor[i] = (i + (5 * i)) % (i + 1);
	}

}