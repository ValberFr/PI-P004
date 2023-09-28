#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float pif = M_PI;
    double pid = M_PI;

    cout << "Maior valor float: " << numeric_limits<float>::max() << endl;
    cout << "Menor valor float: " << numeric_limits<float>::min() << endl;
    cout << pif << endl;
    cout << fixed << setprecision(2);
    cout << "O valor de PI é: " << pif << endl;
    cout << fixed << setprecision(4);
    cout << "O valor de PI é: " << pif << endl;
    cout << fixed << setprecision(8);
    cout << "O valor de PI é: " << pif << endl;
    cout << fixed << setprecision(16);
    cout << "O valor de PI é: " << pif << endl;
    cout << pid << endl;

    cout << fixed << setprecision(2);
    cout << "O valor de PI é: " << pid << endl;
    cout << fixed << setprecision(4);
    cout << "O valor de PI é: " << pid << endl;
    cout << fixed << setprecision(8);
    cout << "O valor de PI é: " << pid << endl;
    cout << fixed << setprecision(16);
    cout << "O valor de PI é: " << pid << endl;
    // Existe diferença nos valores.

    cout << "Maior valor double: " << numeric_limits<double>::max() << endl;
    cout << "Maior valor long double: " << numeric_limits<long double>::max() << endl;
    // Existe diferença entre double e long double.

    return 0;
}