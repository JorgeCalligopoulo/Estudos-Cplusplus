/* P 02.cpp : This file contains the 'main' function. Program execution begins and ends there.

Faça um programa que tenha uma função a qual receba a altura e o raio de um cilindro circular e retorne
o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula:

V = π * raio² * altura,

onde π é uma constante global com valor = 3:141592.


*/

#include <iostream>


double volumecilindro(float raio, float altura);

float raio, altura;

int main()
{
	std::cout << "Calculadora de volume do cilindro!\nDigite o Raio: ";
	std::cin >> raio;
	std::cout << "Digite a Altura: ";
	std::cin >> altura;
	std::cout << volumecilindro(raio, altura);
	return 0;

}

double volumecilindro(float raio, float altura)
{
	const double pi = 3.141592;
	return(pi * (raio * raio) * altura);
}