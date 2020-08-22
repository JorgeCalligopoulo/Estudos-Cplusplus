/* Lista 6_05.cpp : This file contains the 'main' function. Program execution begins and ends there.

5. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i,
o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e
substitua todas as vogais da palavra dada por esse caractere.

*/

#include <iostream>,

std::string palavra;
int count, vogais = 0;
char carater;

int main()
{
    std::cout << "digite sua palavra favorita :\n";
    std::cin >> palavra;
    std::cout << "digite um caractere para as vogais serem substituidas\n:";
    std::cin >> carater;

    for (int i = 0; i < palavra.size(); i++)
    {
        if (palavra[i] == 'a'|| palavra[i] == 'e'|| palavra[i] == 'i'|| palavra[i] == 'o'|| palavra[i] == 'u')
        {
            vogais++;
            palavra[i] = carater;
        }
    }
    std::cout << vogais;
    std::cout << "\n" << palavra;
}

