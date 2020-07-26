// limite da piramide 12
//

#include <iostream>

int fatorial(int x);
int pascal(int n, int p);

int size;

int main()
{
    
    std::cout <<"Digite o tamanho da piramide (Limite 12)\nTamanho: " << std::endl;
    std::cin >> size;

    for (int n = 0; n < size; n++)
    {
        for (int p = 0; p < (n+1); p++)
        {
            std::cout << pascal(n,p)<< " ";

        }

        std::cout << std::endl;
    }

}

