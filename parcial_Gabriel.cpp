
#include <pch.h>
#include <iostream>
using namespace std;

void Pago(int&TOTAL, double&Cargo);

int main(){

	int TOTAL = 0;
	double Cargo = 0.01;
	char data = 'a';
	int Combo1 = 350, Combo2 = 450, Combo3 = 400, Combo4 = 500, Combo5 = 300;
	int Combo6 = 50, Combo7 = 75, Combo8 = 100;
	while(data!= 'S')
	{
		system("cls");
		cout<<"\t Restaurante La Seccion 01\n\n";
		cout<<"\t\t 1. Combo del Dia - $350\n";
			cout<<"\t\t 2. Especial del Chef - $450\n";
				cout<<"\t\t 3. Especial de Pasta - $400\n";
					cout<<"\t\t 4. Parrilla - $500\n";
						cout<<"\t\t 5. Ensalada Mixta - $300\n\n";
						cout<<"\t\t -- Bebidas -- \n\n";
							cout<<"\t\t 6. Refrescos - $50\n";
								cout<<"\t\t 7. Agua - $75\n";
									cout<<"\t\t 8. Poste - $100\n";

		cout<<"\n\n\tEliga una de las opciones (1-8) del Restaurante | P para Pagar | S para salir: ";
		cin>>data;
		if(data == 's')
		   {data = 'S';
		   }
		switch(data)
		{
			case '1':
				TOTAL = TOTAL +  Combo1;
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
				 Pago(TOTAL,Cargo);
				 TOTAL = 0;
					break;
			default :
				break;
					
		}
	}
	system("CLS");
	cout<<"Hasta Luego (:\n";	
}
	
void Pago(int& TOTAL,double&Cargo)
{
		
system("cls");
int TMP = TOTAL;
double Impuesto = 0.18;
int Cargo2=10;
int contador = 0;
int Monto = 100;
while(TMP>=100){
 contador++;
 TMP -=100;	
}
Cargo2*=contador;
float NewTotal = TOTAL*Cargo + TOTAL*Impuesto + Cargo2 + TOTAL;
cout<<"\n\t Restaurante La Seccion 01\n\n";
cout<<"\n\t Monto del pedido: " << TOTAL <<endl;
cout<<"\n\t Impuesto de Ley: " << TOTAL*Impuesto<<endl;
cout<<"\n\t Cargo Por Servicio: "<< TOTAL*Cargo + Cargo2<<endl;
cout<<"\n\t Total a pagar: "<< NewTotal <<endl<<endl;
system("Pause");
}	
