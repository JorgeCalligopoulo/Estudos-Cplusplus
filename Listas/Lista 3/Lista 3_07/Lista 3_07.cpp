/* Lista 3_07.cpp : This file contains the 'main' function. Program execution begins and ends there.

Utilizando funções, faça uma calculadora que contenha as operações:
adição, subtração, multiplicação e divisão. A escolha da operação deve
ser fornecida pelo usuário, assim como os 2 valores a serem calculados na
operação.

*/

#include <iostream>
#include "funcoes.h"

double num, num1;
char k;

int main()
{
    std::cout << "Digite dois numeros!\nPrimeiro numero: ";
    std::cin >> num;
    std::cout << "Segundo numero: ";
    std::cin >> num1;
    system("cls");
    ponto01:
    std::cout << "Digite a operação desejada \n1-Adicao \n2-Sustracao \n3-Multiplicacao \n4-Divisao\nnumero da operacao: ";
    std::cin >> k;

    switch (k)
    {
    case '1':
        adicao();
        break;

    case '2':
        subtracao();
        break;

    case '3':
        multipli();
        break;

    case '4':
        dividir();
        break;

    default:
        std::cout << "opcao invalida\n";
        system("cls");
        goto ponto01;
        break;
    }
    return 0;

}

void adicao()
{
    std::cout << num + num1 << std::endl;
}

void subtracao()
{
    std::cout << num - num1 << std::endl;
}

void multipli()
{
    std::cout << num * num1 << std::endl;
}

void dividir()
{
    std::cout << num / num1 << std::endl;
}