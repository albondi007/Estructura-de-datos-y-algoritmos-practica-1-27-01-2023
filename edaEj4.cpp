#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;

    cout << "introduzca una secuencia de numeros(introduce 0 para salir): ";
    cin >> num;

    while (num != 0)
    {
        count++;
        cin >> num;
    }

    cout << "numero de numeros introducidos: " << count << endl;

    return 0;
}
