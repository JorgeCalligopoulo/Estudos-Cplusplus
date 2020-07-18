/* Lista 3_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
Faça um programa que peça ao usuário para digitar 10 valores e some-os.

*/

#include <iostream>
using namespace std;// subarashi
int soma = 0;
void somar(); //carrega a função

int main()
{
	somar(); // chama a função
	return 0;
}

void somar() //função que faz a soma de 10 valores 
{
	float num;
	for (int i = 0; i < 10; i++)
	{
		cout << "digite um numero! \n";
		cin >> num;
		soma += num;
	}
	cout << "a soma dos numeros e: " << soma << endl;
}