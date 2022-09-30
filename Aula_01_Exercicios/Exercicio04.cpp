#include <iostream>

using namespace std;

main() {

    float celsius, fahrenheit;

    cout << "Digite a temperatura em fahrenheits" << endl;

    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5/9;
 
    cout << "A temperatura em celsius eh: " << celsius;
}
