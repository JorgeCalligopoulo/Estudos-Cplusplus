// Lista 2_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
// utilizando a biblioteca cmath faça um programa que leia um numero inteiro e imprima: oquadrado do numero ; A raiz quadrada; o seno; o cosseno

#include <iostream>
#include <cmath>
using namespace std;// gostosa

int num; // variavel do tipo inteira para numeros inteiros

int main()
{
	cout << "Digite um numero inteiro e positivo!\n"; // texto
ponto01: // marcador
	cin >> num; // grava um numero na memoria
	if (num < 0) // verifica 
	{
		cout << "numero invalido!!\n Digite um numero inteiro e positivo!!\n"; // mensagem ao usuario
		goto ponto01; //retrocede o codigo ate o marcador
	}
	cout << "numero Digitado: " << num << endl; // imprime o numero armazenado no vetor
	cout << num << " ao quadrado:\t " << pow(num, 2) << endl;  // imprime o numero ao quadrado
	cout << "Raiz de " << num << ":\t " << sqrt(num) << endl;  // imprime a raiz do numero
	cout << "Seno de " << num << ":\t " << sin(num) << endl;   // imprime o seno
	cout << "Cosseno de " << num << ":\t " << cos(num) << endl;// imprime o cosseno

}

