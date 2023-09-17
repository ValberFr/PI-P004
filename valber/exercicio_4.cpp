#include <limits>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    float pif = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280;
    double pid = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280;
    long double pid_long = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280;
    
    cout << "Menor float:" << numeric_limits<float>::min() << endl;
    cout << "Maior float:" << numeric_limits<float>::max() << endl;
    
    cout << "Pi float:" << setprecision(2) << pif << endl;
    cout << "Pi float:" << setprecision(4) << pif << endl;
    cout << "Pi float:" << setprecision(8) << pif << endl;
    cout << "Pi float:" << setprecision(16) << pif << endl;
    
    cout << "Pi double:" << setprecision(2) << pid << endl;
    cout << "Pi double:" << setprecision(4) << pid << endl;
    cout << "Pi double:" << setprecision(8) << pid << endl;
    //O double e long double assumiu o mesmo valor
    cout << "Pi double:" << setprecision(16) << pid << endl;
    cout << "Pi double loong:" << setprecision(16) << pid_long << endl;



    return 0;
}