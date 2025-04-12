//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float radio, area=0.0, circunferencia=0.0;
	const float PI=3.1416;
	cout<<"PI="<<PI<<"\n";
	
	cout<<fixed;
	cout.precision(4); //presicion es para demostrar cuantos decimales
	cout<<"dame el radio de un circulo: ";
	cin>>radio;
	area=PI*(radio*radio);
	circunferencia=PI*radio*2;
	cout<<"usando precision a cuatro decimales con fixed\n";
	cout<<"para un circulo de radio: "<<radio<<"\n";
	cout<<"el area es: " <<area<<"\n";
	cout<<"la circunferencia es: "<<circunferencia<<"\n";
	cout<<"usando precision a dos decimales con printf\n";
	printf("para un circulo de radio: %5.2f \n", radio);
	printf("el area es: %5.2f\n", area);
	printf("la circunferencia es es: %5.2f\n", circunferencia);
	return 0;
	
	
}