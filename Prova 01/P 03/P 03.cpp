/* P 03.cpp : This file contains the 'main' function. Program execution begins and ends there.

Faça um programa que tenha uma função que recebe um número positivo N e calcule o seu fatorial (N!).
Exemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120

*/

#include <iostream>

void fatorial(int num);

int num = 0;

int main()
{
    std::cout << "Digite um numero e obtenha o seu fatorial!\n" << "Numero: ";
    std::cin >> num;

	fatorial(num);

	return 0;

}

void fatorial(int num)
{
	int total = 1;

	std::cout << num << "! = ";

	for (int i = num; i > 1; i--)
	{
		std::cout << num << " * ";
		total = total * num;
		num--;
	}

	std::cout << "1 = " << total;

}