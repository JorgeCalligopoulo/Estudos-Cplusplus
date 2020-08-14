/* Lista 5_01.cpp : This file contains the 'main' function. Program execution begins and ends there.

Escreva uma fun��o que dado um n�mero real passado como par�metro,
retorne a parte inteira e a parte fracion�ria deste n�mero. Escreva um
programa que chama esta fun��o.
Prot�tipo:
void frac(float num, int* inteiro, float* frac);

*/

#include <iostream>
#include <math.h>

void frac(float num, int* inteiro, float* frac);

int inte;
float num, decimal;

int main()
{
    std::cout << "Digite um numero: ";
    std::cin >> num;
    system("cls");
    frac(num,&inte,&decimal);
    std::cout << "Inteiro" <<inte << std::endl << "Decimal" <<decimal << std::endl;

}

void frac(float num, int* inteiro, float* frac)
{
    *frac = fmod(num,1);
    *inteiro = num - *frac;
}