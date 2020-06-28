// Lista 2_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int num;

int main()
{
	cout << "Digite um numero inteiro e positivo!\n";
ponto01:
	cin >> num;
	if (num < 0)
	{
		cout << "numero invalido!!\n Digite um numero inteiro e positivo!!\n";
		goto ponto01;
	}
	cout << "numero Digitado: " << num << endl;
	cout << num << " ao quadrado:\t " << pow(num, 2) << endl;
	cout << "Raiz de " << num << ":\t " << sqrt(num) << endl;
	cout << "Seno de " << num << ":\t " << sin(num) << endl;
	cout << "Cosseno de " << num << ":\t " << cos(num) << endl;

}

