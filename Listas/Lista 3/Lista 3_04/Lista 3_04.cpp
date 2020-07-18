/* Lista 3_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
Faça um programa que leia um número inteiro positivo par N e imprima todos
os números pares de 0 até N em ordem crescente.

*/

#include <iostream>

void contagem(int num);

int num = 0; //variavel que armazena o numero digitado

int main()
{

	std::cout << "digite um numero!\n";
	std::cin >> num;
	contagem(num);
	return 0;
}
 
void contagem(int numero) //funçao responsavel por contar os positivos ate o valor desejado
{
	for (int passo = 0; numero >= passo; passo += 2)
	{
		std::cout << passo << std::endl;
	}
}