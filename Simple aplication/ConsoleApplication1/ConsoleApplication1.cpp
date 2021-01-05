// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void Pago(int&TOTAL, double&Cargo);

int main() {

	int TOTAL = 0;
	double Cargo = 0.01;
	char data = 'a';
	int Combo1 = 350, Combo2 = 450, Combo3 = 400, Combo4 = 500, Combo5 = 300;
	int Combo6 = 50, Combo7 = 75, Combo8 = 100;
	while (data != 'S')
	{
		std::system("cls");
		std::cout << "\t Restaurante La Seccion 01\n\n";
		std::cout << "\t\t 1. Combo del Dia - $350\n";
		std::cout << "\t\t 2. Especial del Chef - $450\n";
		std::cout << "\t\t 3. Especial de Pasta - $400\n";
		std::cout << "\t\t 4. Parrilla - $500\n";
		std::cout << "\t\t 5. Ensalada Mixta - $300\n\n";
		std::cout << "\t\t -- Bebidas -- \n\n";
		std::cout << "\t\t 6. Refrescos - $50\n";
		std::cout << "\t\t 7. Agua - $75\n";
		std::cout << "\t\t 8. Poste - $100\n";

		std::cout << "\n\n\tEliga una de las opciones (1-8) del Restaurante | P para Pagar | S para salir: ";
		std::cin >> data;
		if (data == 's')
		{
			data = 'S';
		}
		switch (data)
		{
		case '1':
			TOTAL = TOTAL + Combo1;
			break;
		case '2':
			TOTAL += Combo2;
			break;
		case '3':
			TOTAL += Combo3;
			break;
		case '4':
			TOTAL += Combo4;
			break;
		case '5':
			TOTAL += Combo5;
			break;
		case '6':
			TOTAL += Combo6;
			break;
		case '7':
			TOTAL += Combo7;
			break;
		case '8':
			TOTAL += Combo8;
			break;
		case 'S':
		case 's':
			break;
		case 'P':
		case 'p':
			Pago(TOTAL, Cargo);
			TOTAL = 0;
			break;
		default:
			break;

		}
	}
	std::system("CLS");
	std::cout << "Hasta Luego (:\n";
}

void Pago(int& TOTAL, double&Cargo)
{

	system("cls");
	int TMP = TOTAL;
	double Impuesto = 0.18;
	int Cargo2 = 10;
	int contador = 0;
	int Monto = 100;
	while (TMP >= 100) {
		contador++;
		TMP -= 100;
	}
	Cargo2 *= contador;
	double NewTotal = TOTAL * Cargo + TOTAL * Impuesto + Cargo2 + TOTAL;
	std::cout << "\n\t Restaurante La Seccion 01\n\n";
	std::cout << "\n\t Monto del pedido: " << TOTAL << std::endl;
	std::cout << "\n\t Impuesto de Ley: " << TOTAL * Impuesto << std::endl;
	std::cout << "\n\t Cargo Por Servicio: " << TOTAL * Cargo + Cargo2 << std::endl;
	std::cout << "\n\t Total a pagar: " << NewTotal << std::endl << std::endl;
	std::system("Pause");
}