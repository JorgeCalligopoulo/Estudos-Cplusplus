/* Lista 5_06.cpp : This file contains the 'main' function. Program execution begins and ends there.

6. Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e
imprima todos os n�meros naturais de 0 at� N em ordem decrescente.

*/

#include <iostream>

int somarecursiva(int numero);

int num;

int main()
{
	std::cout << "Digite um numero: ";
	std::cin >> num;
	somarecursiva(num);
}

int somarecursiva(int numero)
{
	std::cout << numero << " ";
	if (numero == 0)
	{
		return(0);
	}
	else
	{
		return(numero + somarecursiva(numero - 1));
	}
}