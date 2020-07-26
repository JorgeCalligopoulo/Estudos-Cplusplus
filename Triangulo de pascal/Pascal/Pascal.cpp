// limite da piramide 13
//

#include <iostream>

unsigned long long fatorial(int x);
int pascal(int n, int p);

int size,space;

int main()
{
    std::cout <<"Digite o tamanho da piramide (Limite 21)\nTamanho: ";
    std::cin >> size;
    space = size;

    for (int n = 0; n < size; n++)
    {

        for (int i = 0; i < (space); i++)  // controla o espaçamento da borda
        {
            std::cout << " ";
        }

        space--;
        
        for (int p = 0; p < (n+1); p++) //chama a função pascal com os dados de operador e base para que seja retornado o valor de acordo com a posição a piramide
        {
            std::cout << pascal(n,p)<< " ";

        }

        std::cout << std::endl;
    }

}

