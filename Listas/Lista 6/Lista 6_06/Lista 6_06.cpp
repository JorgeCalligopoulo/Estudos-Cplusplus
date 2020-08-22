/* Lista 6_06.cpp : This file contains the 'main' function. Program execution begins and ends there.

6. Faça um programa que, dada uma string, diga se ela é um palíndromo ou
não. Lembrando que um palíndromo é uma palavra que tenha a propriedade
de poder ser lida tanto da direita para a esquerda como da esquerda para a
direita.
Exemplo:
ovo
arara
anotaram a data da maratona

*/

#include <iostream>
#include <string>
std::string palavra;
bool pali = true;


int main()
{
	std::cout << "digite uma palavra\n";
	std::getline(std::cin, palavra);

	int f = (palavra.size())-1;
	for (int i = 0; i != f; i++)
	{
		std::cout << "f = " << f << " >> i = " << i << std::endl;
	checkpoint:
		if (palavra[i] != ' ' && palavra[f] != ' ')
		{
			if (palavra[i] == palavra[f])
			{
				std::cout << palavra[i] << " " << palavra[f] << std::endl;
			}
			else
			{
				std::cout << "não é um palíndromo\n";
				pali = false;
				break;

			}
		}
		else
		{
			if (palavra[i] == ' ')
			{
				i++;
			}
			else if (palavra[f] == ' ')
			{
				f--;
			}
			goto checkpoint;
		}
		f--;


	}
	if (pali)
	{
		std::cout << "é um palíndromo!\n";
	}
}

