//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include<iostream>
using namespace std;
int main() {
int numero;
cout<<"ingresa un numero: ";
cin>>numero;
if (numero<= 1) {
cout<<numero<<" no es un numero primo." <<endl;
} else {
for (int i=2;i*i<=numero;i++) {
if (numero % i == 0) {
cout<<numero<<" no es un numero primo." <<endl;
return 0;
}
}
cout<<numero<<" es un numero primo." <<endl;
}
return 0;
}