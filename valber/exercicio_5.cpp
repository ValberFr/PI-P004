#include <iostream>

using namespace std;

int main(void)
{
    int int_bool = 1;
    float float_bool = 1.0;

    cout << "Int positivo: " << bool(int_bool) << endl;

    int_bool = 0;
    cout << "Int igual a 0 em bool: " << bool(int_bool) << endl;

    int_bool = -1;
    cout << "Int negativo: " << bool(int_bool) << endl;

    cout << "Float positivo: " << bool(float_bool) << endl;

    char char_bool = 'a';
    cout << "Um char em bool é considerado: " << bool(char_bool) << endl;

    char_bool = '\0';
    cout << "Um char com valor de barra 0 é considerado: " << bool(char_bool) << endl;

    return 0;
}