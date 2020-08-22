/* Lista 6_09.cpp : This file contains the 'main' function. Program execution begins and ends there.

9. Utilizando uma estrutura, faça um programa que permita a entrada de nome,
endereço e telefone de 5 pessoas e os imprima em ordem alfabética.

*/

#include <iostream>
#include <string>

void gravar_dado(int pos);
void exibir_dado();
void org(int pos);

struct RG
{
    std::string nome;
    std::string endereco;
    std::string telefone;
}pessoa[6];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        gravar_dado(i);
    }
    exibir_dado();
}


void gravar_dado(int pos)
{
    std::cout << "nome: ";
    std::getline(std::cin, pessoa[pos].nome);

    std::cout << "endereço: ";
    std::getline(std::cin, pessoa[pos].endereco);

    std::cout << "telefone: ";
    std::getline(std::cin, pessoa[pos].telefone);

    org(pos);
}

void exibir_dado()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "pessoa\n\tNome: " << pessoa[i].nome << std::endl;

        std::cout << "\tEndereço: " << pessoa[i].endereco << std::endl;

        std::cout << "\tTelefone: " << pessoa[i].telefone << std::endl;
    }

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
                pessoa[5] = pessoa[pos];
                pessoa[pos] = pessoa[pos - 1];
                pessoa[pos - 1] = pessoa[5];

            }
        }
        
    }
}