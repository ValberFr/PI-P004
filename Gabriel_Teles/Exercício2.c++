#include <iostream>


using namespace std;

char carac;

int main(void){

for(int i = '0'; i <= '9'; i++){

cout << "Caractere " << char(i) << " na tabela ASCII = " << i << "\n";

}

cout << "\n";

for(int i = '0'; i <= '9'; i++){

cout << oct << "Caractere " << char(i) << " em octal = " << i << "\n";
}

cout << "\n";

for(int i = '0'; i <= '9'; i++){

cout << hex << "Caractere " << char(i) << " em hexadecimal = " << i << "\n";
}
cout << dec;

cout << "\n";

cout << "Escreva um caractere qualquer: ";
cin >> carac; 

cout << "A representação do caractere " << carac << " na tabela ASCII = " << int(carac) << "\n";

cout << oct << "A representação do caractere " << carac << " em octal = " << int(carac) << "\n";

cout << hex << "A representação do caractere " << carac << " em hexadecimal = " << int(carac) << "\n";


return 0; 
}