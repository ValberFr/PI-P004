#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){

    int minValue = numeric_limits<int>::min();
    int maxValue = numeric_limits<int>::max();

    cout << "Menor valor int: " << minValue << endl;
    cout << "Maior valor int: " << maxValue << endl;

    unsigned long int uli = numeric_limits <unsigned long int>::min();
    cout << "Menor valor unsigned long int: " << uli << endl;
    uli = numeric_limits <unsigned long int>::max();
    cout << "Maior valor unsigned long int: " << uli << endl;

    long int li = uli;
    uli = li;

    //O valor não foi alterado
    cout << "O valor de uli agora é: " << uli << endl;

    li = numeric_limits <long int>::min();
    cout << "Menor valor long int: " << li << endl;
    li = numeric_limits <long int>::max();
    cout << "Maior valor long int: " << li << endl;

    unsigned int ui = li;
    li = ui;

    //O valor ficou limitado ao maior valor possível de um unsigned int
    cout << "O valor de li agora é: " << li << endl;

    ui = numeric_limits <unsigned int>::min();
    cout << "Menor valor unsigned int: " << ui << endl;
    ui = numeric_limits <unsigned int>::max();
    cout << "Maior valor unsigned int: " << ui << endl;
    
    return 0;

}