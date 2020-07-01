// Lista 2_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
// faça um programa que leia um numero inteiro e diga se ele é par ou impar

#include <iostream>
using namespace std;//...

int num; // define a variavel como inteira

int main()
{
    cout << "Digite um numero inteiro!\n"; // msg ao usuario
    cin >> num; // grava um numero na memoria
	if ((num/2) != (num / 2.00)) // verifica se ((numero/2) é diferente de (numero/2.00) se sim quer dizer que a segunda divisão deu numero quebrado
	{
		cout << "O numero e impar\n"; // mensagem ao usuario caso o numero seja impa 
	}
	else
	{
		cout << "o numero e par\n"; // //
	} 
}


