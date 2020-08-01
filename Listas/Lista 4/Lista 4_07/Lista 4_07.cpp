/* Lista 4_07.cpp : This file contains the 'main' function. Program execution begins and ends there.

Faça um programa que leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é
chamada passando duas variáveis A e B por exemplo e, após a execução da
função, A conterá o valor de B e B terá o valor de A.

*/

#include <iostream>

int a = 1, b = 2;

void trocar(int* pa, int* pb);

int main()
{
	trocar(&a,&b);
	std::cout << a << " " << b <<std::endl;
}

void trocar(int *pa,int *pb)
{
	int num;
	num = *pa;
	*pa = *pb;
	*pb = num;

}