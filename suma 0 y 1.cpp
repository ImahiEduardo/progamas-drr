//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include <iostream>
using namespace std;
int main() {
	
int a = 0, b = 1;
char continuar;
do {
int siguiente = a + b;
cout << "los numeros son: " << a << " y " << b << ", su suma es: " << siguiente << endl;
cout << "quieres continuar? (s/n): ";
cin >> continuar;
a = b;
b = siguiente;
}while (continuar == 's' or continuar == 'S'); 
cout << "fin del progama" << endl;
return 0;
}