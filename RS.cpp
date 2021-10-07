#include <iostream>
using namespace std;

int main()
{
	system("Color 0A");
	setlocale(LC_ALL, "portuguese");
	float sala, reaj, saaj;

	cout << "Diga o seu salario antigo: ";
	cin >> sala;
	cout << "Diga o percentual do seu reajuste: ";
	cin >> reaj;
	cout << "CALCULANDO O SALARIO" << '\n'<<
		"____________________________" << '\n';
	
	saaj = sala + (sala * reaj / 100);

	cout << "O salario: " << sala << '\n';
	cout << "O aumento: " << reaj << "%" << '\n';
	cout << "Total do aumento: " << saaj - sala << '\n';
	cout << "O Salario Atual: " << saaj << '\n';

	system("Pause");
	return 0;
}