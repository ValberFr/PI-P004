#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

float pif = M_PI;
double pid = 3.141592653589793238462643383279502884197169;
int precisoes[] = {2,4,8,16};


int main(void){
cout << "pi = 3,14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651\n" << endl;

cout << "Esse é o limite minimo da variavel em float: " << numeric_limits<float>::min() << endl;
cout << "Esse é o limite minimo da variavel em float: "<< numeric_limits<float>::max()  << endl;

cout << "Esse é o limite de casas decimais que pode ser exibido de pi: " << setprecision(22) << pif << ". No caso 22 casas.\n" << endl;

for(int i = 0; i < size(precisoes);i++)
{

cout << "Esse é PI escrito com uma precião de " << precisoes[i] << " casas decimais: " << setprecision(precisoes[i]) << pid << endl;

}


}