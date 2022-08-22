#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float numPositivo, aoQuadrado, aoCubo, raiz;
    cout << "Digite um numero maior que zero" << endl;

    cin >> numPositivo;

    if(numPositivo > 0){
        aoQuadrado = numPositivo * numPositivo;

        cout << "O quadrado do numero digitado eh: " << aoQuadrado << endl;

        aoCubo = numPositivo * numPositivo * numPositivo;

        cout << "O cubo do numero digitado eh: " << aoCubo << endl;

        raiz = sqrt(numPositivo);

        cout << "A raiz quadrada do numero digitado eh: " << raiz << endl;
    }
    else {
        cout << "O numero digitado eh igual ou menor a zero";
    }
}
