/* Lista 5_08.cpp : This file contains the 'main' function. Program execution begins and ends there.

8. Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e
retorne o fatorial desse n�mero.

*/

#include <iostream>

int numero;
int fatorial(int num);

int main()
{
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	std::cout << fatorial(numero) << std::endl;
}

int fatorial(int num)
{

	if (num == 1)
	{
		return(1);
	}
	else
	{
		return(fatorial(num -1) * num);
	}

}