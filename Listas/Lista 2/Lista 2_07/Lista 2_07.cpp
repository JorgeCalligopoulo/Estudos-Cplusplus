// Ler 3 números inteiros e dizer se todos são diferentes entre si, se há 2 iguais,
//ou todos iguais.
//

#include <iostream>
using namespace std;// subarashi
int num, num1, num2, contador;

int main()
{
	cout << "Digite tres numeros inteiros!\n";
	cout << "Primeiro n: ";
	cin >> num;
	cout << "Segundo n: ";
	cin >> num1;
	cout << "Terceiro n: ";
	cin >> num2;
	contador = (num == num1 || num == num2) + (num1 == num2 || num1 == num2) + (num2 == num || num2 == num1); //verifica as igualdades entre os numeros

	switch (contador) //exibe uma msg de acordo com o contador
	{
	case 1 || 0: 
		cout << "todos são diferentes entre si\n";
		break;

	case 2:
		cout << "ha 2 iguais\n";
		break;

	case 3:
		cout << "todos iguais\n";
		break;
	default:
		break;
	}

	return 0;
}

