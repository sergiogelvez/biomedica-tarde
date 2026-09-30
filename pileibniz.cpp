#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int nterm, i;
    double suma = 0, pi, err;
    cout << "Pase el numero de terminos!: ";
    cin >> nterm;
    for (i = 0; i <= nterm; i++)
    {
        suma = suma + pow(-1, i)/(2 * i + 1);
    }
    pi = 4 * suma;
    cout << setprecision(10) << "El valor de pi calculado es " << pi << endl;
    cout << setprecision(10) << "El valor de pi estandar es " << M_PI << endl;
    err = ((pi - M_PI)/ M_PI) * 100;
    cout << setprecision(3) << "El error es " << err << "%";
}