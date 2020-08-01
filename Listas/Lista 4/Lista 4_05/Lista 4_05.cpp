/* Lista 4_05.cpp : This file contains the 'main' function. Program execution begins and ends there.

Escreva um programa que declare um inteiro, um real e um char, e ponteiros
para inteiro, real e char. Associe as variáveis aos ponteiros (use &amp;). Modifique
os valores de cada variável usando os ponteiros. Imprima os valores das
variáveis antes e após a modificação.

*/

#include <iostream>

int a=15,*pa;
float b=16.15,*pb;
char c='c',*pc;

int main()
{
	std::cout << "inteiro: " << a << "\nReal: " << b << "\nChar: " << c << std::endl;
	pa = &a;
	pb = &b;
	pc = &c;
	*pa = 10;
	*pb = 15.16;
	*pc = 'p';
	std::cout << "inteiro: " << a << "\nReal: " << b << "\nChar: " << c << std::endl;

}

