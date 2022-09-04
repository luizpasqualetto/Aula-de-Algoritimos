#include <iostream>

using namespace std;

int main() {

    int numero1, numero2, cache;

    cout << "Digita o valor da primeira variavel:";

    cin >> numero1;

    cout << "Digita o valor da segunda variavel:";

    cin >> numero2;

    cache = numero1;

    numero1 = numero2;

    numero2 = cache;

    cout << "O valor da primeira variavel eh: " << numero1 << endl;

    cout << "O valor da segunda variavel eh: " << numero2;
}
