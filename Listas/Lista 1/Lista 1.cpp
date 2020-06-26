// Lista 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

int numI, numI1, numI2, numI3, res;
float numF, numF1, numF2, numF3;
int main()
{
	numI = numI1 = numI2 = numI3 = numF = numF1 = numF2 = numF3 = 0;
	
	std::cout << "01\n"; //01

	std::cout << "Digite um numero inteiro!\n";
	std::cin >> numI;
	std::cout << "O numero digitado foi: " << numI << "\n";
	system("pause");
	system("cls");



	std::cout << "02\n"; //02

	std::cout << "Digite um numero REAL!\n";
	std::cin >> numF;
	std::cout << "O numero digitado foi: " << numF << "\n";
	system("pause");
	system("cls");



	std::cout << "03\n"; //03

	std::cout << "Digite tres numero inteiro!\n";
	std::cout << "Primeiro numero: ";
	std::cin >> numI;

	std::cout << "Segundo numero: ";
	std::cin >> numI1;

	std::cout << "Terceiro numero: ";
	std::cin >> numI2;

	res = numI + numI1 + numI2;
	std::cout << "O resultado e: " << res << "\n";
	system("pause");
	system("cls");



	std::cout << "04\n"; //04

	std::cout << "Digite um numero REAL!\n";
	std::cin >> numF;
	res = numF * numF;
	std::cout << "O resultado e: " << res << "\n";
	system("pause");
	system("cls");



	std::cout << "05\n"; //5

	std::cout << "Digite um numero REAL!\n";
	std::cin >> numF;
	std::cout << "A quinta parte do numero digitado e: " << numF/5 << "\n";
	system("pause");
	system("cls");



	std::cout << "06\n"; //6

	std::cout << "Digite a temperatua em graus Celcius: \n";
	std::cin >> numF;
	std::cout << "Amesma temperatura em graus Fahrenheit e: " << ((numF*1.8) + 32) << "\n";
	system("pause");
	system("cls");



	std::cout << "07\n"; //7

	std::cout << "Digite a temperatua em graus Fahrenheit: \n";
	std::cin >> numF;
	std::cout << "Amesma temperatura em graus Celsius e: " << 5 * (numF - 32.0)/9.0 << "\n";
	system("pause");
	system("cls");



	std::cout << "08\n"; //8

	std::cout << "Digite a velocidade em Km/H: \n";
	std::cin >> numF;
	std::cout << "Amesma Velocidade em m/s e: " << numF/3.6 << "\n";
	system("pause");
	system("cls");



	std::cout << "08\n"; //9

	std::cout << "Digite a velocidade em m/s: \n";
	std::cin >> numF;
	std::cout << "Amesma Velocidade em Km/H e: " << numF * 3.6 << "\n";
	system("pause");
	system("cls");



	std::cout << "10\n"; //10

	std::cout << "Digite as 4 notas para obter a media aritmetica\n";
	std::cout << "Primeira Nota: ";
	std::cin >> numF;

	std::cout << "Segunda nota: ";
	std::cin >> numF1;

	std::cout << "Terceira nota: ";
	std::cin >> numF2;

	std::cout << "quarta nota: ";
	std::cin >> numF3;

	std::cout << "A media e: " << ((numF + numF1 + numF2 + numF3)/4) << "\n";
	system("pause");
	system("cls");
	


	std::cout << "Desafio 01\n"; // Morte

	std::cout << "Digite um numero entre 100 e 999 e obtenha sua versão espelhada\n";
	std::cin >> numF;
	numI = numF / 100; // inicio
	numI1 = (numF - (numI * 100))/10; //meio
	numI2 = numF - ((numI * 100) + (numI1 * 10)); //fim
	std::cout << numI2 << numI1 << numI;
	system("pause");
	system("cls");
	


	std::cout << "Desafio 02\n"; // Vida

	std::cout << "Digite a Hora minuto e Segundo do inicio da experiencia \n";
	std::cout << "Hora: ";
	std::cin >> numI;
	
	std::cout << "Minutos: ";
	std::cin >> numI1;

	std::cout << "segundos: ";
	std::cin >> numI2;

	std::cout << "Digite o tempo da experiencia em segundos: ";
	std::cin >> numI3;

	res = (numI * 60 * 60) + (numI1 * 60) + (numI2) + (numI3);

	system("cls");

	std::cout << "Inicio da experiencia: " << numI << ":" << numI1 << ":" << numI2 << "\n";
	std::cout << "Duracao do experimento: " << numI3 << "segundos.\n";
	numI  =  res / 60 / 60;
	numI1 = (res - (numI * 60 * 60)) / 60;
	numI2 = (res - ((numI * 60 * 60) + (numI1 * 60)));
	std::cout << "Fim da experiencia: " << numI << ":" << numI1 << ":" << numI2 << "\n";

	system("pause");
	system("cls");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
