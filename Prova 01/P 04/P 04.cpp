/* P 04.cpp : This file contains the 'main' function. Program execution begins and ends there.

Faça um programa que tenha uma função a qual recebe dois valores X e Z. 
Calcule e retorne o resultado de . 
Dentro da função que você criou, utilize a função de potência da biblioteca matemática do C++ para o cálculo.


*/

#include <iostream>
#include <math.h>

void potencia(int base, int elevado);

int x, z;

int main()
{
    std::cout << "De o valor de X: ";
    std::cin >> x;
    std::cout << "De o valor de Z: ";
    std::cin >> z;
    potencia(x, z);


    return 0;
}


void potencia(int base, int elevado)
{

    std::cout << "Resultado e: " << pow(base, elevado) << std::endl;

}
