/* Lista 4_04.cpp : This file contains the 'main' function. Program execution begins and ends there.

Fa�a um programa que leia um vetor de 5 posi��es para n�meros reais e,
depois, um c�digo inteiro. Se o c�digo for zero, finalize o programa; se for 1,
mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa.
Caso, o c�digo for diferente de 1 e 2 escreva uma mensagem informando
que o c�digo � inv�lido.

*/

#include <iostream>

int vec[5]{ 1,2,3,4,5 };
char key;
int main()
{
	std::cout << "1-ordenada 2-ordenada inversa. \nDigite o codigo da opera��o: \n";
	std::cin >> key;

	if (key == '1')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << vec[i] << " | ";
		}

	}
	else if (key == '2')
	{
		for (int i = 4; i >= 0 ; i--)
		{
			std::cout << vec[i] << " | ";
		}
	}
	else
	{
		std::cout << "op��o invalida\n";
	}

}


