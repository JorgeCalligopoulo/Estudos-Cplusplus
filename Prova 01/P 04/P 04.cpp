/* P 04.cpp : This file contains the 'main' function. Program execution begins and ends there.

Fa�a um programa que tenha uma fun��o a qual recebe dois valores X e Z. 
Calcule e retorne o resultado de . 
Dentro da fun��o que voc� criou, utilize a fun��o de pot�ncia da biblioteca matem�tica do C++ para o c�lculo.


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
