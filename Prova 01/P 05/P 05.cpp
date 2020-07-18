/* P 05.cpp : This file contains the 'main' function. Program execution begins and ends there.

Faça um programa que desenha na tela a seguinte figura:

	 *
	***
   *****
  *******
 *********
***********

*/

#include <iostream>

void triangulo(int tam);

int main()
{
	triangulo(6);
	return 0;
}

void triangulo(int tam)
{
	int cont, cont1 = 1;

	for (tam; tam > 0; tam--)
	{
		cont = tam - 1;
		while (cont > 0)
		{
			std::cout << " ";
			cont--;
		}

		cont = cont1;
		while (cont > 0)
		{
			std::cout << "*";
			cont--;
		}
		cont1 += 2;
		std::cout << std::endl;

	}


}