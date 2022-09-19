#include <iostream>

using namespace std;

int main()
{
    float numero1, numero2;

    cout << "Digite dois numeros para verificar a ordem crescente deles: " << endl;

    cin >> numero1;

    cin >> numero2;

    if (numero1 > numero2) 
    {
        cout << numero2 << " " << numero1 << endl;
    }
    else 
    {
        cout << numero1 << " " << numero2 << endl;
    }
}
