/* Lista 3_09.cpp : This file contains the 'main' function. Program execution begins and ends there.

Elabore uma fun��o que receba tr�s notas de um aluno como par�metros e
uma letra. Se a letra for A, a fun��o dever� calcular a m�dia aritm�tica das
notas do aluno; se for P, dever� calcular a m�dia ponderada, com pesos 5, 3
e 2.

*/

#include <iostream>
float nota, nota1, nota2;
char k;

int main()
{
    std::cout << "Digite as notas do aluno!\nPrimeira nota";
    std::cin >> nota;
    std::cout << "Segunda nota: ";
    std::cin >> nota1;
    std::cout << "Terceira nota";
    std::cin >> nota2;
    std::cout << "Escolha Media:\nA-Aritmetica \nP-Ponderada";
    std::cin >> k;

    calcular()


}

void calcular()
{
    if (k == 'A')
    {
        std::cout << "Media aritmetica: " << (nota + nota1 + nota2) / 3;
    }
    else
    {
        std::cout << "Media aritmetica: " << ((nota) + (nota1) + (nota2) / 3;
    }

}