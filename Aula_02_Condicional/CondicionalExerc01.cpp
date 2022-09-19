#include <iostream>

using namespace std;

int main()
{
    int numero, sobra;

    cout << "Digite um numero para verificar se ele eh par ou impar" << endl;

    cin >> numero;

    sobra = numero % 2;

    if(sobra == 0) 
    {
        cout << "O numero eh par";
    }
    else 
    {
        cout << "O numero eh impar";
    }
}
