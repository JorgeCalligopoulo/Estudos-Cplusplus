/* Lista 4_06.cpp : This file contains the 'main' function. Program execution begins and ends there.

Escreva um programa que contenha duas vari�veis inteiras. Compare seus
endere�os e exiba o maior endere�o.

*/

#include <iostream>

int a = 0, b = 1;
int* pa = &a, * pb = &b,*pr;


int main()
{
	if (pa > pb)
	{
		pr = pa;
	}
	else if (pb >pa)
	{
		pr = pb;
	}

	std::cout << "Maior endereco: " << pr << std::endl << "variavel a = " << pa << std::endl << "Variavel b = " << pb << std::endl;

}

