/* Lista 5_02.cpp : This file contains the 'main' function. Program execution begins and ends there.

2. Implemente uma fun��o que calcule a �rea da superf�cie e o volume de uma
esfera de raio R. Essa fun��o deve obedecer ao prot�tipo:
void calc_esfera(float R, float* area, float* volume);
A �rea da superf�cie e o volume s�o dados, respectivamente, por:
A = 4 * p * R�
V = 4 / 3 * p * R�

*/

#include <iostream>

void calc_esfera(float R, float* area, float* volume);

#define pi = 3.14;

float raio, area, volume;

int main()
{
    std::cout << "Digite o raio de uma esfera:";
    std::cin >> raio;
    calc_esfera(raio, &area, &volume);
    std::cout << "Raio = " << raio << std::endl << "Area = " << area << std::endl << "Volume = " << volume << std::endl;

}

void calc_esfera(float R, float* area, float* volume)
{
    *area = 4 * 3.14 * (R * R);
    *volume = (4 / 3) * 3.14 * (R * R * R);
}
