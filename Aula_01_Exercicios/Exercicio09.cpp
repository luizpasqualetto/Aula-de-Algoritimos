#include <iostream>

using namespace std;

int main() {

    float mediaProva, mediaTrabalho, mediaExercicio, mediaFinal;

    cout << "Digite a media de prova" << endl;

    cin >> mediaProva;

    cout << "Digite a media de trabalho" << endl;

    cin >> mediaTrabalho;

    cout << "Digite a media de exercicio" << endl;

    cin >> mediaExercicio;

    mediaFinal = (mediaProva * 0.7) + (mediaTrabalho * 0.2) + (mediaExercicio * 0.1);

    cout << "A sua media final foi: " << mediaFinal << endl;
}
