// Lista 2_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
// peso ideal

#include <iostream>

using namespace std;// subarashi

float altu;
char sexo;

int main()
{
	cout << "insira seus dados e descubra o seu peso ideal!\n"; //msg ao usuario
	cout << "Sexo M-masculino, F-feminino: "; //msg ao usuario
	cin >> sexo; // coleta um valor e quarda na memoria
	cout << "Altura M:"; //msg ao usuario
	cin >> altu; // coleta um valor e quarda na memoria
	if (sexo == 'M' || sexo == 'm') //condicional para verificar se é Masculino
	{
		cout << "Seu peso ideal e: " << ((72.7 * altu) - 58) << "kg\n"; //msg e calculo
	}

	else if (sexo == 'F' || sexo == 'f') //condicional para verificar se é Feminino
	{
		cout << "Seu peso ideal e: " << ((62.1 * altu) - 44.7) << "kg\n"; //msg e calculo
	}

	else
	{
		cout << "algo deu errado!!"; // caso o usuario não tenha a capacidade de apertar m || f
	}
	return 0;
}

