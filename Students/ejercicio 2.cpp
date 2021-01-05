

#include <iostream>
#include <queue>
#include <stdlib.h>
#include <ctime>

using namespace std;

string get_time()
{

    string date = "";
    time_t tt;
    struct tm *ti;
    time(&tt);
    ti = localtime(&tt);
    date = asctime(ti);
    return date;
}

struct operacion
{
    string date;
    double monto;
    string op;
};

class Cuenta
{
    queue<operacion> historico;
    double balance;

public:
    Cuenta()
    {
    }

    bool Deposito(double deposito)
    {
        string op = "Deposito";
        balance += deposito;
        operacion h = {get_time(), deposito, op};

        historico.push(h);
        if (historico.size() == 10)
        {
            historico.pop();
        }
        return true;
    }

    bool Retiro(double retiro)
    {
        string op = "Retiro";

        if (retiro > balance)
        {
            return false;
        }

        balance -= retiro;

        operacion h = {get_time(), retiro, op};
        historico.push(h);
        if (historico.size() == 10)
        {
            historico.pop();
        }
        return true;
    }

    void Balance()
    {
        cout << balance << endl;

        queue<operacion> temp;
        int i = 1;
        while (!historico.empty())
        {
            operacion a = historico.front();
            cout << "Operacion" << ' ' << i << endl;
            cout << a.date << ' ' << a.monto << ' ' << a.op << endl;
            historico.pop();
            temp.push(a);
            i++;
        }

        historico = temp;
    }
};

int main()
{
    Cuenta c;

    while (true)
    {

        cout << endl;

        cout << "1.- Depositar una cantidad." << endl;
        cout << "2.- Retirar una cantidad, si hay Balance disponible." << endl;
        cout << "3.- Consultar el Balance y todas las últimas operaciones." << endl;
        cout << "4. Salir" << endl;

        int op = 0;
        cin >> op;

        if (op == 1)
        {
            cout << "Ingresar la cantidad a depositar" << endl;
            double deposito = 0;
            cin >> deposito;
            bool daro = c.Deposito(deposito);
        }
        else if (op == 2)
        {
            cout << "Ingresar la cantidad a retirar" << endl;
            double retiro = 0;
            cin >> retiro;
            c.Retiro(retiro);
        }
        else if (op == 3)
        {
            cout << "Tu balance a la fecha es: ";
            c.Balance();
        }
        else
        {
            exit(1);
        }
    }

    return 0;
}