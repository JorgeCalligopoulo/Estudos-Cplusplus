/* Lista 4_07.cpp : This file contains the 'main' function. Program execution begins and ends there.

Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que
receba estas 2 vari�veis e troque o seu conte�do, ou seja, esta fun��o �
chamada passando duas vari�veis A e B por exemplo e, ap�s a execu��o da
fun��o, A conter� o valor de B e B ter� o valor de A.

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