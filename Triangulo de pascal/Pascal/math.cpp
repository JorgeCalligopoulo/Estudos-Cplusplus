#include <iostream>

int fatorial(int x) // faz o calculo do fatorial, o limite dessa função e o 12!
{
	if (x == 0 || x == 1 || x > 12)
	{
		if (x > 12)
		{
			std::cout << "\nERRO FATORIAL LIMITE DA FUNCAO ATINGIDO\n";
			return 0;
		}
		else
		{
			return 1;
		}
		
	}
	else
	{
		int total = 1;
		for ( x; x > 0; x--)
		{
			total = x * total;
			//std::cout << total << std::endl; //debug
		}
		return total;
	}

}

int pascal(int n, int p)
{
	if (p == 0 || p == n)
	{
		return 1;
	}
	else
	{
		return(fatorial(n) / (fatorial(p) * fatorial(n - p)));
	}

}