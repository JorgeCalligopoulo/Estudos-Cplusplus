/*Lista 6_07.cpp : This file contains the 'main' function. Program execution begins and ends there.

7. Implemente um programa que leia o nome, a idade e o endereço de uma
pessoa e armazene os dados em uma estrutura.

*/

#include <iostream>
#include <string>

struct dados
{
	std::string nome;
	int idade;
	std::string endereco;
}pessoa;

int main()
{
	std::cout << "Nome: ";
	std::getline(std::cin, pessoa.nome);
	std::cout << "idade: ";
	std::cin >> pessoa.idade;
	std::cout << "Endereço: ";
	std::cin.ignore();
	std::getline(std::cin, pessoa.endereco);

	std::cout << "nome >> " << pessoa.nome << "\nidade >> " << pessoa.idade << "\nEndereco >> " << pessoa.endereco << std::endl;
}

