// Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está
// entre 1 e 12, e se o dia existe naquele mês.Note que fevereiro tem 29 dias
// em anos bissextos, e 28 dias em anos não bissextos.
/*

    Primeira situação: Se o ano de 2015 ou 2016 for uma divisão exata em relação a 4, deveremos verificar, em seguida, se não é divisível por 100. Se não for, o ano será bissexto;

    Segunda situação: Se o ano de 2015 ou 2016 não for divisível por 4, então deveremos verificar se ele é divisível por 400. Se também não for divisível, o ano de 2015 não será bissexto;

    Terceira situação: Se o ano de 2015 ou 2016 não for divisível por 4, então devemos verificar se ele é divisível por 400. Caso seja, o ano de 2015 é bissexto.
*/

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

