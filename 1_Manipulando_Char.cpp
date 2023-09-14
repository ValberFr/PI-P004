#include <iostream>
#include <locale.h>

using namespace std;

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    char letra;

    for (int i = 33; i <= 126; i++)
    {

        letra = i;

        cout << "\'" << char(i) << "\'"
             << " - " << dec << i << " - " << oct << i << " - " << hex << i << endl;
    }

    cin >> letra;

    cout << "\'" << letra << "\'"
         << " - " << dec << int(letra) << " - " << oct << int(letra) << " - " << hex << int(letra) << endl;

    wchar_t char1 = L'ç'; 
    wchar_t char2 = L'ã'; 

    wcout << L"Caracter 1: " << char1 << endl;
    wcout << L"Caracter 2: " << char2 << endl;
    return 0;
}