/* Lista 3_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos
os n�meros pares de 0 at� N em ordem crescente.

*/

#include <iostream>

int contagem(int num);

int num = 0;

int main()
{

	std::cout << "digite um numero!\n";
	std::cin >> num;
	contagem(num);
	return 0;
}

int contagem(int numero)
{
	for (int passo = 0; numero >= passo; passo += 2)
	{
		std::cout << passo << std::endl;
	}
	return 0;
}