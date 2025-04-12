//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int rc, ri, rb, cf;
	cout<<"las respuestas correctas valen 5 puntos c/u\n";
	cout<<"las respuesas incorrectas restan 1 punto c/u\n";
	cout<<"las respuestas en blanco valen 0 puntos c/u\n";
	cout<<"dime la cantidad de respuestas correctas: ";
	cin>>rc;
	cout<<"dime la cantidad de respuestas incorrectas: ";
	cin>>ri;
	cout<<"dime la cantidad de respuestas en blanco: ";
	cin>>rb;
	cf=(rc*5)+(ri*(-1))+(rb*0);
	cout<<"la calificacion final es: "<<cf;
return 0;
}