#include <iostream>
using namespace std;

int main() {

    float nota1, nota2, nota3, peso1, peso2, peso3, pesoFinal, notaFinal;

    cout << "Digite a primeira nota" << endl;

    cin >> nota1;

    cout << "Digite o peso da primeira nota" << endl;

    cin >> peso1;

    cout << "Digite a segunda nota" << endl;

    cin >> nota2;

    cout << "Digite o peso da segunda nota" << endl;

    cin >> peso2;

    cout << "Digite a terceira nota" << endl;

    cin >> nota3;

    cout << "Digite o peso da terceira nota" << endl;

    cin >> peso3;

    pesoFinal = (peso1 + peso2 + peso3);

    notaFinal = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) / pesoFinal;

    cout << "A sua media final foi: " << notaFinal << endl;
}
