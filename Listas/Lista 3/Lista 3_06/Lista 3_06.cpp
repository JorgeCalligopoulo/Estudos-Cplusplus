/* Lista 3_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
Escreva um algoritmo que leia um n�mero inteiro entre 100 e 999 e imprima
na sa�da cada um dos algarismos que comp�em o n�mero.
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

