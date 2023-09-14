#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)
{
  float fBool = 20.4;
  int iBool = 20;

 
  cout << "Numero inteiro maior que 0 em bool é considerado: " << bool(iBool) << endl;
  // Qualquer inteiro com valor maior que 0 é considerado true

  iBool = 0;
  cout << "Numero inteiro igual a 0 em bool é considerado: " << bool(iBool) << endl;
  // Qualquer inteiro com valor igual a 0 é considerado false

  iBool = -1;
  cout << "Numero inteiro menor que 0 em bool é considerado: " << bool(iBool) << endl;
  // Qualquer inteiro com valor menor que 0 é considerado false

  cout << "Numero float maior que 0 em bool é considerado: " << bool(fBool) << endl;
  // Qualquer float com valor maior que 0 é considerado true

 //Qualquer inteiro, float ou double que tenha valor diferente de 0 possui valor true, igual a 0 valor false

  char cBool = 'j';
  cout << "Um char em bool é considerado: " << bool(cBool) << endl;
  // Um char com qualquer valor diferente de \0 possui valor true

  cBool = '\0';
  cout << "Um char com valor é considerado: " << bool(cBool) << endl;
  // O char \0 possui valor false

  return 0;
}