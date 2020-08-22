/* Lista 6_03.cpp : This file contains the 'main' function. Program execution begins and ends there.

3. Digite um nome, calcule e retorne quantas letras tem esse nome.

*/

#include <iostream>
#include <string>

std::string nome;
int len;

int main()
{
    std::cout << "Digite seu nome:";
    std::cin >> nome;
    len = nome.size();
    std::cout << "seu nome tem " << len;
}

