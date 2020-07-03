// Lista 2_04.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <math.h>

float num;

using namespace std;//...

int main()
{
	cout << "Digite um numero!\n"; // mostra uma mensagem ao usuario
	cin >> num; //grava um numero digitado na memoria
	if (num > 0) //inicia uma condicional 
	{
		cout << "A raiz quadrada de " << num << " e:  " << sqrt(num) << endl; // emprime a raiz do numero

	}
	else // caso não seja aceito pela condição anterior, é tratado por esta
	{
		cout << num << "ao quadrado e:  " << pow(num, 2) << endl; // emprime o numero ao quadrado
	}
	return 0; // the end
}
