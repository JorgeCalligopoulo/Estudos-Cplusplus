/* Lista 3_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos
os n�meros pares de 0 at� N em ordem crescente.

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
 
void contagem(int numero) //fun�ao responsavel por contar os positivos ate o valor desejado
{
	for (int passo = 0; numero >= passo; passo += 2)
	{
		std::cout << passo << std::endl;
	}
}