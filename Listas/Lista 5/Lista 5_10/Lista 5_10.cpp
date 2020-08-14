/* Lista 5_10.cpp : This file contains the 'main' function. Program execution begins and ends there.

10. Dado um número inteiro N, escreva uma função recursiva que calcule a
Fibonacci deste número.

*/

#include <iostream>
int fibo(int numeroalvo, int termo1 = 1, int termo2 = 1);
int num;

int main()
{
	std::cout << "Digite o numero alvo: ";
	std::cin >> num;
	fibo(num);
}

int fibo(int numeroalvo, int termo1, int termo2)
{
	if ((termo1 + termo2) > numeroalvo)
	{
		return(0);
	}
	else if (termo1 == 1 && termo2 == 1)
	{
		std::cout << 1 << " " << 1 << " ";
		return(fibo(numeroalvo, 2));

	}
	else if (termo1 > termo2)
	{
		termo2 += termo1;
		std::cout << termo2 << " ";
		return(fibo(numeroalvo, termo1, termo2));

	}
	else if (termo1 < termo2)
	{
		termo1 += termo2;
		std::cout << termo1 << " ";
		return(fibo(numeroalvo, termo1, termo2));
	}

}