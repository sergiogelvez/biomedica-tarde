#include <iostream>

using namespace std;

int main()
{
    int n, suma, penultimo = 0, ultimo = 1;
    cout << "Ponga el n: ";
    cin >> n;
    while (ultimo <= n)
    {
        suma = ultimo + penultimo;
        penultimo = ultimo;
        ultimo = suma;
    }
    cout << ultimo;
}