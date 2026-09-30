#include <iostream>

using namespace std;

int main()
{
    int n1, n2, resultado;
    cout << "Introduzca dos numeros, cada uno con un enter: ";
    cin >> n1;
    cin >> n2;
    if (n1 % 2 == 0)
    {
        if (n2 % 2 == 0)
        {
            resultado = n1 + n2;
            cout << "El resultado es " << resultado << endl;
        }
        else
        {
            cout << "el primero es par y el segundo impar" << endl;
        }
    }
    else
        if (n2 % 2 == 0)
        {
            cout << "el primero es impar y el segundo par" << endl;
        }
        else
        {
            resultado = n1 * n2;
            cout << "El resultado es " << resultado << endl;
            
        }
}