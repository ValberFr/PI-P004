#include <iostream>
#include <locale.h>

using namespace std;

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char letter;
    wchar_t char1 = L'ç';
    wchar_t char2 = L'ã';

    for (int i = 33; i <= 126; i++) {
        cout << "\'" << char(i) << "\'" << " - " << dec  <<  i << " - " << oct << i << " - " << hex << i <<endl; 
    }

    cout << char1 << endl;
    cout << char2 << endl;
    
    cout << "Digite o caracter: ";
    cin >> letter;

    cout << "\'" << letter << "\'" << " - " << dec  << int(letter) << " - " << oct << int(letter) << " - " << hex << int(letter) << endl; 
    return 0;
}