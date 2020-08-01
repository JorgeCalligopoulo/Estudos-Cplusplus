/* Lista 4_04.cpp : This file contains the 'main' function. Program execution begins and ends there.

Faça um programa que leia um vetor de 5 posições para números reais e,
depois, um código inteiro. Se o código for zero, finalize o programa; se for 1,
mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa.
Caso, o código for diferente de 1 e 2 escreva uma mensagem informando
que o código é inválido.

*/

#include <iostream>

int vec[5]{ 1,2,3,4,5 };
char key;
int main()
{
	std::cout << "1-ordenada 2-ordenada inversa. \nDigite o codigo da operação: \n";
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
		std::cout << "opção invalida\n";
	}

}


