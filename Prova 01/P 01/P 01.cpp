/* P 01.cpp : This file contains the 'main' function. Program execution begins and ends there.

Fa�a um programa que tenha uma fun��o a qual recebe uma data (dia, m�s e ano) e exiba-a na tela por extenso.
Exemplo:
Entrada: 	18
07
2020

Sa�da: 		18 de julho de 2020.


*/

#include <iostream>

void datacao(int dia, int mes, int ano); //avisa que a fun��o existe para o compilador

int dia, mes, ano;

int main()
{
	std::cout << "digite uma data! \nDia: "; // coleta os dados necessarios
	std::cin >> dia;
	std::cout << "Mes: ";
	std::cin >> mes;
	std::cout << "Ano: ";
    std::cin >> ano;
    datacao(dia, mes, ano); // chama a fun��o
    return 0;

}

void datacao(int dia, int mes, int ano) // fun��o que faz a montagem dos dados e devolve a saida
{

	std::cout << dia << " de ";

    switch (mes)
    {
    case 1:
        std::cout <<("Janeiro");
        break;
    case 2:
        std::cout <<("Fevereiro");
        break;
    case 3:
        std::cout <<("Mar�o");
        break;
    case 4:
        std::cout <<("Abril");
        break;
    case 5:
        std::cout <<("Maio");
        break;
    case 6:
        std::cout <<("Junho");
        break;
    case 7:
        std::cout <<("Julho");
        break;
    case 8:
        std::cout <<("Agosto");
        break;
    case 9:
        std::cout <<("Setembro");
        break;
    case 10:
        std::cout <<("Outubro");
        break;
    case 11:
        std::cout <<("Novembro");
        break;
    case 12:
        std::cout <<("Dezembro");
        break;
    default:
        std::cout <<("mes invalido!");
        break;

    }
    std::cout << " de " << ano << std::endl;

}
