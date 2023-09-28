#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");

    char c = '0', d;


    for(c = '0' ; c <= '9' ; c++){
        cout << c << " - Decimal: " << int(c)
             << ", Octal: " << oct << int(c)
             << ", Hexadecimal: " << hex << int(c) << endl;
    }

    cout << "Digite o caractere a ser convertido para Ascii: " << endl;
    cin >> d;

    cout << d << " - Decimal: " << int(d)
             << ", Octal: " << oct << int(d)
             << ", Hexadecimal: " << hex << int(d) << endl
             << "ç e ã" << endl;

    return 0;
}