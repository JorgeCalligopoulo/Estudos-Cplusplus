/* Lista 6_04.cpp : This file contains the 'main' function. Program execution begins and ends there.

4. Ler nome, sexo e idade. Se o sexo for masculino e a idade for menor que 25,
imprime o nome da pessoa e a palavra “ACEITO”, caso contrário imprimir
“NÃO ACEITO”.

*/

#include <iostream>
#include <string>

struct pessoa
{
    std::string nome;
    bool sexo; // 0 = Feminino 1 = masculino
    int idade;
};

int main()
{
    struct pessoa serhumano;
    std::cout << "\nDigite seu nome: ";
    std::getline(std::cin, serhumano.nome);

    std::cout << "\nDigite seu sexo 0 para Feminino e 1 para Masculino : ";
    std::cin >> serhumano.sexo;

    std::cout << "\nDigite sua idade: ";
    std::cin >> serhumano.idade;

    if (serhumano.sexo == true && serhumano.idade < 25)
    {
        std::cout << serhumano.nome << " << ACEITO\n" << std::endl;

    }
    else
    {
        std::cout << serhumano.nome << " << NAO ACEITO\n" << std::endl;
    }
}

