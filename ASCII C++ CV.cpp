#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
    string asciiString;
    cout << "Masukkan string ASCII: ";
    cin >> asciiString;

    cout << "Pola bit dari string \"" << asciiString << "\" adalah:" << endl;
    for (size_t i = 0; i < asciiString.length(); ++i) {
        char asciiChar = asciiString[i];
        bitset<8> binary(asciiChar);
        cout << asciiChar << ": " << binary << endl;
    }

    return 0;
}

