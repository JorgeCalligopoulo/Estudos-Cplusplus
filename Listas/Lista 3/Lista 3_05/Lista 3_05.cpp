/* Lista 3_05.cpp : This file contains the 'main' function. Program execution begins and ends there.

Escreva um algoritmo que leia certa quantidade de números e imprima o
maior deles e quantas vezes o maior número foi lido. A quantidade de
n´números a serem lidos deve ser fornecida pelo usuário.

*/

#include <iostream>

void enumerador(int k);

int key;

int main()
{

	std::cout << "Digite quantos numeros serao inseridos!\n";
	std::cin >> key;
	enumerador(key);
	return 0;

}

void enumerador(int k) // tela azul mental mas basicamente verifica qual é o maior e quantas vezes foi digitado
{
	float num, maior, nmaior;
	num = maior = nmaior = 0;
	for (int i = 0; i < k; i++)
	{

		std::cout << "Digite um numero: ";
		std::cin >> num;
		nmaior = ((maior == num) * nmaior) + 1;  // verifica se o numero digitado e igual ao maior numero e se for adiciona 1 ao contador
		maior = ((num >= maior) * num) + ((num < maior) * maior); // verifica se o numero digitado e maior e atualiza na variavel
		system("cls");
		std::cout << "Maior numero: " << maior << std::endl << "numero de vezes que o maior foi digitado: " << nmaior << std::endl;

	}

}