//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
int x, y;
float z;
//Imprime números de 1 en 1 hasta el 100 mientras x<=100,
//variación: incrementos de 1 en 1 y 2 en 2
for(x=1;x<11;x++)
{
cout<<x<<" , ";
}
cout<<"\n";
system("PAUSE");
for(x=100;x!=65;x-=5)//x=x-5
{
z=sqrt(x);
cout<<"La raíz cuadrada de "<<x<<" es "<<z<<"\n";
}
system("PAUSE");
x=10;
for(y=10;y!=x;++y){
cout<<" Dentro del ciclo (nunca entra)\n";
}
cout<<" Fuera del ciclo\n";
system("PAUSE");
for(x=0,y=0;x+y<10;++x)
{
cout<<"Dame el valor de y: ";
cin>>y;
cout<<x<<"+"<<y<<"="<<x+y<<" El ciclo continúa mientras la suma sea <10\n"; 
}
cout<<x<<"+"<<y<<"="<<x+y<<" Fuera del ciclo\n";
//el for no puede tener todas sus partes
for(x=0;x!=123;)
{
	cout<<"dame el valor de x, 123 para terminar el ciclo: ";
	cin>>x;
}
system("PAUSE");
//inializacion antes del for
x=1;
for(;x<=10;)
{
	printf("%d\n",x);
++x;//variaicon fuera de la sentencia for pero dentro del cuerpo de ciclo
}
system("pause");
//ciclo infinito
printf("nunca termina\n");
cout<<"hola mundo\n";
for(x=0;x<1999900000;x++);//el ciclo concluye aquí
cout<<"hola mundo  despues de unos cuantos segundos"; //no es parte del ciclo
return 0;
}
