#include <iostream>
#include <limits>

using namespace std;

int main(void)
{

    cout << "Menor int: " << numeric_limits<int>::min() << endl;
    cout << "Maior int: " << numeric_limits<int>::max() << endl;

    unsigned long int uli = numeric_limits<unsigned long int>::min();
    cout << "Menor unsigned long int: " << uli << endl;
    uli = numeric_limits<unsigned long int>::max();
    cout << "Maior unsigned long int: " << uli << endl;

    long int li = uli;
    uli = li;
    // uli assume exatamente o mesmo valor de li
    cout << "Valor de uli recebendo o li que é long int: " << uli << endl;

    li = numeric_limits<long int>::min();
    cout << "Menor long int: " << li << endl;
    li = numeric_limits<long int>::max();
    cout << "Maior long int: " << li << endl;

    unsigned int ui = li;
    li = ui;

    // li assume um valor menor , igual a maior int * 2 + 1
    cout << "Valor de li recebendo o ui que é unsigned int: " << li << endl;

    ui = numeric_limits<unsigned int>::min();
    cout << "Menor unsigned int: " << ui << endl;
    ui = numeric_limits<unsigned int>::max();
    cout << "Maior unsigned int: " << ui << endl;

    return 0;
}