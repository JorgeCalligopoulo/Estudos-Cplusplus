// Lista 2_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;//...

int num, num1;

int main()
{
    cout << "Digite dois numeros inteiros separados por enter!\n"; // msg ao usuario
    cin >> num >> num1; // captura duas entradas do teclado e atribui as respectivas variaveis
	if (num > num1) // condisional que verifica se o 1 numero � maior que o segundo
	{
		cout << "o maior e: " << num << " e a diferen�a e: " << (num - num1) << endl; // emprime o maior assim como a diferen�a
	}
	else if (num1 > num) // condisional que verifica se o 2 numero � maior que o 1
	{
		cout << "o maior e: " << num1 << " e a diferen�a e: " << (num1 - num) << endl; // emprime o maior assim como a diferen�a
	}
	else // caso n�o entre nas condicionais anteriores � capturado por esta
	{
		cout << "os valores digitados sao iguai!!!\n assim sendo a diferen�a e nula\n"; // caso os dois imputs sejam iguais exibe esta msg
	}

	return 0;
}

