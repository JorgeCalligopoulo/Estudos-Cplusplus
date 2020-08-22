/* Lista 6_10.cpp : This file contains the 'main' function. Program execution begins and ends there.

10. Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média
Final), armazenando em um vetor. Uma vez lidos os dados, divida estes
dados em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados,
considerando a média mínima para a aprovação como sendo 5.0. Exibir na
tela os dados do vetor de aprovados, seguido dos dados do vetor de
reprovados.

*/

#include <iostream>
#include <string>

void gravar_dado(int pos);
void exibir_dado();
void org(int pos);
void filtrar();


struct RG
{
    std::string nome;
    std::string matricula;
    int media;
}pessoa[11];

std::string aprovados[10];
std::string reprovados[10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        gravar_dado(i);
    }
    filtrar();
    exibir_dado();
}


void gravar_dado(int pos)
{
    std::cin.clear();
    std::cout << "nome: ";
    std::cin.ignore();
    std::getline(std::cin, pessoa[pos].nome);

    std::cout << "matricula: ";
    std::getline(std::cin, pessoa[pos].matricula);

    std::cin.clear();
    std::cout << "media: ";
    std::cin >> pessoa[pos].media;

    org(pos);
}

void exibir_dado()
{
    std::cout << "Aprovados:\n\t";
    for (int i = 0; i < 10; i++)
    {
        if (pessoa[i].media >= 5)
        {
            std::cout << aprovados[i] << ", ";
        }
        
    }
    std::cout << "\nReprovados:\n\t";
    for (int i = 0; i < 10; i++)
    {
        if (pessoa[i].media < 5)
        {
            std::cout << reprovados[i] << ", ";
        }
        
    }
    std::cout << "\n\n";

}


void org(int pos)
{

    if (pos == 0)
    {

    }
    else
    {
        for (pos; pos > 0; pos--)
        {
            if (pessoa[pos].nome[0] < pessoa[pos - 1].nome[0])
            {
                pessoa[10] = pessoa[pos];
                pessoa[pos] = pessoa[pos - 1];
                pessoa[pos - 1] = pessoa[10];

            }
        }

    }
}

void filtrar()
{
    int r = 0;
    int a = 0;
    for (int i = 0; i < 10; i++)
    {
        if (pessoa[i].media > 5)
        {
            aprovados[a] = pessoa[i].nome;
            a++;
        }
        else
        {
            reprovados[r] = pessoa[i].nome;
            r++;
        }

    }
}