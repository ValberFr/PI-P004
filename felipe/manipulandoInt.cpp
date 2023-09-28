#include <iostream>
#include <limits>

using namespace std;

int main() {

    unsigned long int uli;
    long int li;
    unsigned int ui;

    cout << "Maior valor inteiro: " << numeric_limits<int>::max() << endl;
    cout << "Menor valor inteiro: " << numeric_limits<int>::min() << endl;
    uli = numeric_limits<unsigned long int>::max();
    cout << "Maior valor uli: " <<  uli << endl;
    uli = numeric_limits<unsigned long int>::min();
    cout << "Menor valor uli: " << uli << endl;
    uli = numeric_limits<unsigned long int>::max();
    li = uli;
    uli = li;
    cout << uli << endl; // o resultado foi o mesmo pois o máximo dos dois são iguais. No caso do menor número ficará com zero, pois ele está recebendo um mínimo unsigned.
    li = numeric_limits<long int>::min();
    cout << li << endl; // com a possibilidade de receber valores negativos, o mínimo foi alterado.
    li = numeric_limits<long int>::max();
    ui = li; // recebeu o valor máximo porém não tem capacidade para armazenar.
    li = ui; // recebeu o valor reduzido unsigned int
    cout << ui << '-' << li << endl;
    ui = numeric_limits<unsigned int>::max();
    cout << ui << endl;
    ui = numeric_limits<unsigned int>::min();
    cout << ui << endl;
    return 0;
}