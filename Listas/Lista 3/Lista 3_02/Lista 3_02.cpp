/* Lista 3_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
Fa�a um programa que pe�a ao usu�rio para digitar 10 valores e some-os.

*/

#include <iostream>
using namespace std;// subarashi
int soma = 0;
void somar(); //carrega a fun��o

int main()
{
	somar(); // chama a fun��o
	return 0;
}

void somar() //fun��o que faz a soma de 10 valores 
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