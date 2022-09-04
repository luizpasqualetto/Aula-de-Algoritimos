#include <iostream>

using namespace std;

int main() {

    float notaP1, notaP2, media;

    cout << "Digita a nota da P1:" << endl;

    cin >> notaP1;

    cout << "Digita a nota da P2:" << endl;

    cin >> notaP2;

    media = notaP1 * 0.6 + notaP2 * 0.4;

    cout << "Sua media sera: " << media;
}
