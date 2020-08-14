/* Lista 5_05.cpp : This file contains the 'main' function. Program execution begins and ends there.

5. Crie uma função recursiva que receba um número inteiro positivo N e calcule
o somatório dos números de 1 a N.

*/

#include <iostream>

int somarecursiva(int numero);

int num;

int main()
{
    std::cout << "Digite um numero: ";
	std::cin >> num;
	std::cout << somarecursiva(num) << std::endl;
}

int somarecursiva(int numero)
{
	if (numero == 1)
	{
		return(1);
	}
	else
	{
		return(numero + somarecursiva(numero - 1));
	}
}