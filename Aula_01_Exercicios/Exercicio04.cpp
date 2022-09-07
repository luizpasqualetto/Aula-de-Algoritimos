#include <iostream>

using namespace std;

int main() {

    float celsius, fahrenheit, cache;

    cout << "Digite a temperatura em fahrenheits" << endl;

    cin >> fahrenheit;

    cache = fahrenheit - 32;

    celsius = cache * 5/9;

    cout << "A temperatura em celsius eh: " << celsius;
}
