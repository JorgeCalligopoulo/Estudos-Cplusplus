/* Lista 3_08.cpp : This file contains the 'main' function. Program execution begins and ends there.
Fa�a uma fun��o para verificar se um n�mero � positivo ou negativo. Sendo
que o valor de retorno ser� 1 se positivo, -1 se negativo e 0 se for igual a 0.
*/

#include <iostream>

void verificar(float num);

float num;

int main()
{
    std::cout << "digite um numero: \n";
    std::cin >> num;
    verificar(num);
}

void verificar(float num)
{
    std::cout << (num > 0) + ((num < 0) * -1);
}