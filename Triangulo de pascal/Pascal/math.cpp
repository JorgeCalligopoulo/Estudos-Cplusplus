#include <iostream>

unsigned long long fatorial(int x) // faz o calculo do fatorial, o limite dessa função e o 12!
{
	if (x == 0 || x == 1 || x > 20) // filtra alguns conseitos de numeros fatoriais assim como o limite da função
	{
		if (x > 20)
		{
			std::cout << "\nERRO FATORIAL LIMITE DA VARIAVEL ATINGIDO\n";
			return 0;
		}
		else
		{
			return 1;
		}
		
	}
	else
	{
		unsigned long long total = 1;
		for ( x; x > 0; x--) //faz o calculo fatorial
		{
			total = x * total;
			//std::cout << total << std::endl; //debug
		}
		return total;
	}

}

int pascal(int n, int p) // aplica a formula da piramide de pascal a posição recebida.
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