#include <iostream>

int numI, numI1, numI2, numI3, res;
float numF, numF1, numF2, numF3;
int main()
{
	numI = numI1 = numI2 = numI3 = numF = numF1 = numF2 = numF3 = 0;

	std::cout << "Desafio 01\n"; // Morte

	std::cout << "Digite um numero entre 100 e 999 e obtenha sua versão espelhada\n";
	std::cin >> numF;
	numI = numF / 100; // inicio
	numI1 = (numF - (numI * 100)) / 10; //meio
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

	res = (numI * 60 * 60) + (numI1 * 60) + (numI2)+(numI3);

	system("cls");

	std::cout << "Inicio da experiencia: " << numI << ":" << numI1 << ":" << numI2 << "\n";
	std::cout << "Duracao do experimento: " << numI3 << "segundos.\n";
	numI = res / 60 / 60;
	numI1 = (res - (numI * 60 * 60)) / 60;
	numI2 = (res - ((numI * 60 * 60) + (numI1 * 60)));
	std::cout << "Fim da experiencia: " << numI << ":" << numI1 << ":" << numI2 << "\n";

	system("pause");
	system("cls");
}
