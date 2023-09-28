#include <iostream>

using namespace std;

int main(){

    bool sn;
    int valor1, valor2;
    cout << "Digite um valor: " << endl;
    cin >> valor1;
    cout << "Digite outro valor: " << endl;
    cin >> valor2;

    if(valor1 == valor2){
        sn = true;
    }else{
        sn = false;
    }
    
    cout << sn << endl;

    return 0;
}