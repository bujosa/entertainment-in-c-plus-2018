/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>
#include <iomanip>

using namespace std;

int minhours = 3;
double hours = 0;
int maxhours = 24;
int extra = 25;
double * clientes = NULL;
int * monto = NULL;
int N = 0;

void montoapagar()
{
   system("cls");
   cout << setw(1);
   cout << "Automovil";
   cout << setw(10);
   cout << "Horas";
   cout << setw(16);
   cout << "Monto a Pagar"<<endl;
   
   for(int i = 0; i < N; i++){
       cout << setw(1);
       cout << i+1;
       cout << setw(15);
       cout << clientes[i];
       cout << setw(10);
       cout << monto[i] << endl;
   }
   system("pause");
}

int main()
{
    cout<<"Cuantos clientes introduceras? ";
    cin >> N;
    monto = new int[N];
    clientes = new double[N];
    
    for(int i = 0; i < N; i++){
        double h = 0;
        int Monto = 50;
        bool validar = false;
        do{
        cout << "Cliente #" << i+1 << " horas estacionado: ";
        cin >> h;
        if(h < 25){
          validar = true;    
        }else{
            cout << "\nSolo se puede menos de 24 horas por cliente";
            system("pause");
            system("cls");
        }
        }while(!validar);
        
        if(h > 3 && h < 24){
            h-=3;
            Monto += h*extra;
        }
        if(h==24){
            Monto = 400;
        }
        monto[i] = Monto;
        clientes[i] = h;
    }
    
    montoapagar();
    
    return 0;
}