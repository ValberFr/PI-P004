#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

unsigned long int uli;
long int li;
unsigned int ui;

int main(){

cout << "Esse é o limite minimo da variavel em int: " << numeric_limits<int>::min() << endl;
cout << "Esse é o limite minimo da variavel em int: "<< numeric_limits<int>::max()  << endl;
cout << endl;

uli = numeric_limits<unsigned long int>::max();
cout << "Esse é o limite minimo da variavel em unsigned long int: " << numeric_limits<unsigned long int>::min() << endl;
cout << "Esse é o limite minimo da variavel em unsigned long int: "<< numeric_limits<unsigned long int>::max()  << endl;
cout << endl;


li = uli;
cout << "li com o valor de uli: " << li << endl;
cout << endl;

uli = li;
cout << "uli com o valor reatibuido por li: " << uli << endl;
cout << endl; //li ao receber o valor de uli se tornou -1 mas uli ao ter seu valor reatribuido por li voutou a ser 18446744073709551615

li = numeric_limits<long int>::max();
cout << "Esse é o limite minimo da variavel em long int: " << numeric_limits<long int>::min() << endl;
cout << "Esse é o limite minimo da variavel em long int: "<< numeric_limits<long int>::max()  << endl;
cout << endl;

ui = li;
cout << "ui com o valor de li: " << ui << endl;
cout << endl;

li = ui;
cout << "li com o valor reatibuido por ui: " << li << endl;
cout << endl;/*ui com valor de li recebe o valor maximo de uma usigned int ja que li(uma long int) tem valores maximos e minímos fora do escopo de ui,
ja li com valor de ui simplismente recebe qualquer valor de ui(no caso foi passado o valor max de ui por causa da atribuição anterior) */ 

ui = numeric_limits<unsigned int>::max();
cout << "Esse é o limite minimo da variavel em unsigned int: " << numeric_limits<unsigned int>::min() << endl;
cout << "Esse é o limite minimo da variavel em unsigned int: "<< numeric_limits<unsigned int>::max()  << endl;
cout << endl;

}