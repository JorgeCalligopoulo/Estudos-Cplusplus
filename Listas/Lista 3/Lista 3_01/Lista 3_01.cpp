/* Lista 3_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
Escreva um programa que escreva na tela, de 1 até 50, de 1 em 1, 3 vezes.
A primeira vez deve usar a estrutura de repetição for, a segunda while, e a
terceira do-while.
*/

#include <iostream>
using namespace std;// subarashi
void foron(); //chama as funções para o codigo caregalas
void whileon();
void whiledo();

int main()
{
	foron(); //executa as funções
	whileon();
	whiledo();
	return 0;
}

//Funções V
void foron()
{
	cout << endl << endl;
	int num = 0;
	for (int i = 0; i < 50; i++)
	{
		num++;
		cout << num << " ";

	}
}

void whileon()
{
	cout << endl << endl;
	int num = 0;
	while (num < 50)
	{
		num++;
		cout << num << " ";
	}
}

void whiledo()
{
	cout << endl << endl;
	int num = 0;
	do
	{
		num++;
		cout << num << " ";

	} while (num < 50);
}
