/* Lista 3_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e
imprima sua média.

*/

#include <iostream>
using namespace std;// subarashi

void mediadez();

int main()
{
	cout << "digite os numeros a serem tirados a media, valores negativos serão ignorados!\n";
	mediadez();
	return 0;
}

void mediadez()
{
	int num, cont, soma; num = cont = soma = 0;

	while (cont < 10)
	{
		cout << "numero: ";
		cin >> num;
		cont += (num >= 0);
		soma += ((num >= 0)*num);
	}
	cout << "A media dos 10 numeros positivos e: " << soma / 10 << endl;
}

