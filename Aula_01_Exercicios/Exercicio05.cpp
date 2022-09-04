#include <iostream>
using namespace std;

int main() {

    float area, base, altura;

    cout << "Digite a altura do triangulo" << endl;

    cin >> altura;

    cout << "Digite a base do triangulo" << endl;

    cin >> base;

    area = base * altura / 2;

    cout << "A area do triangulo dado eh: " << area;
}
