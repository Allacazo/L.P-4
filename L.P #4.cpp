// L.P #4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int n, num;
    int positivos = 0;
    int negativos = 0;
    int pares = 0;
    int impares = 0;

    cout << "Cuantos numeros desea ingresar: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Ingrese un numero entero: ";
        cin >> num;

        if (num > 0)
        {
            positivos++;
        }
        else
        {
            if (num < 0)
            {
                negativos++;
            }
        }

        if (num % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    cout << endl;
    cout << "Resultado final" << endl;
    cout << "Numeros positivos: " << positivos << endl;
    cout << "Numeros negativos: " << negativos << endl;
    cout << "Numeros pares: " << pares << endl;
    cout << "Numeros impares: " << impares << endl;

    return 0;
}


