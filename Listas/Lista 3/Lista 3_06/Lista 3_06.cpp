/* Lista 3_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima
na saída cada um dos algarismos que compõem o número.
*/

#include <iostream>

int num, uni, dez, cen;

int main()
{
	std::cout << "digite um numero! entre 100 e 999\n numero: ";
	std::cin >> num;
	cen = num / 100; //isola a centena
	dez = (num / 10) % 10; //isola a dezena
	uni = num % 10; //isola a unidade
	std::cout << "Centena: " << cen << "\nDezena: " << dez << "\nUnidade: " << uni << std::endl;
	return 0;
}

