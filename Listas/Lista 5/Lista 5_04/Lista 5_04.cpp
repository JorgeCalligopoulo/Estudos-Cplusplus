/* Lista 5_04.cpp : This file contains the 'main' function. Program execution begins and ends there.

4. Considere a seguinte declaração: int A, *B, **C, ***D; escreva um programa
que leia a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada
para calcular o dobro, C o triplo e D o quádruplo.

*/

#include <iostream>

int A, * B, ** C, *** D;

int main()
{
	
	std::cout << "Digite um numero: ";
	std::cin >> A;
	B = &A;
	C = &B;
	D = &C;
	std::cout << "A = " << A << std::endl;
	std::cout << "B = " << (*B * 2) << "\n" << "C = " << (**C * 3) << "\n" << "D = " << (***D * 4);

}


