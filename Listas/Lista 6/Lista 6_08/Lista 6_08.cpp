/* Lista 6_08.cpp : This file contains the 'main' function. Program execution begins and ends there.

8. Escreva um trecho de c�digo para fazer a cria��o dos novos tipos de dados
conforme solicitado abaixo:
 Hor�rio: composto de hora, minutos e segundos.
 Data: composto de dia, m�s e ano.
 Compromisso: composto de uma data, hor�rio e texto que descreve o
compromisso.

*/

#include <iostream>
#include <string>

struct time
{
    int hora;
    int minuto;
    int segundo;
};

struct date
{
    int dia;
    int mes;
    int ano;
};

struct comp
{
    time hora;
    date data;
    std::string texto;
}Compromiso;

int main()
{
    
    std::cout << "digite a data do compromiso \ndia: ";
    std::cin >> Compromiso.data.dia;

    std::cout << "mes: ";
    std::cin >> Compromiso.data.mes;

    std::cout << "ano: ";
    std::cin >> Compromiso.data.ano;

    std::cout << "hora: ";
    std::cin >> Compromiso.hora.hora;

    std::cout << "minuto: ";
    std::cin >> Compromiso.hora.minuto;

    std::cout << "Segundo: ";
    std::cin >> Compromiso.hora.segundo;

    std::cin.ignore();
    std::cout << "descri��o do compromiso :";
    std::getline(std::cin, Compromiso.texto);

    system("cls");

    std::cout << "Data: " << Compromiso.data.dia << "/" << Compromiso.data.mes << "/" << Compromiso.data.ano << std::endl;
    std::cout << "Horario: " << Compromiso.hora.hora << ":" << Compromiso.hora.minuto << ":" << Compromiso.hora.segundo << std::endl;
    std::cout << "descri��o: " << Compromiso.texto;

    
}

