/* Lista 6_02.cpp : This file contains the 'main' function. Program execution begins and ends there.

2. Entre com um nome e imprima o nome somente se a primeira letra do nome
for �a� (mai�scula ou min�scula). Utilize a fun��o .front() da biblioteca string,
para pegar a primeira letra.

*/

#include <iostream>
#include <string>

std::string nome;

int main()
{
	std::cout << "Digite seu nome: ";
	std::cin >> nome;
	if (nome.front() == 'a')
	{
		std::cout << nome << std::endl;
	}
	else
	{
		std::cout << "incompativel" << std::endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
