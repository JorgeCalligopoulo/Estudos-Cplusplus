// Leia uma data e determine se ela � v�lida. Ou seja, verifique se o m�s est�
// entre 1 e 12, e se o dia existe naquele m�s.Note que fevereiro tem 29 dias
// em anos bissextos, e 28 dias em anos n�o bissextos.
/*

    Primeira situa��o: Se o ano de 2015 ou 2016 for uma divis�o exata em rela��o a 4, deveremos verificar, em seguida, se n�o � divis�vel por 100. Se n�o for, o ano ser� bissexto;

    Segunda situa��o: Se o ano de 2015 ou 2016 n�o for divis�vel por 4, ent�o deveremos verificar se ele � divis�vel por 400. Se tamb�m n�o for divis�vel, o ano de 2015 n�o ser� bissexto;

    Terceira situa��o: Se o ano de 2015 ou 2016 n�o for divis�vel por 4, ent�o devemos verificar se ele � divis�vel por 400. Caso seja, o ano de 2015 � bissexto.
*/

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

