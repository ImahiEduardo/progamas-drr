//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float lado1, lado2, area, perimetro;
	cout<<"dame la medida de lado 1: ";
	cin>>lado1;
	cout<<"dame la medida de lado 2: ";
	cin>>lado2;
	area=lado1*lado2;
	perimetro=(lado1*2)+(lado2*2); //lado1+lado1+lado2+lado2
	
	cout<<"el area mide: "<<area<<"\n";
	cout<<"el perimetro mide: " <<perimetro<<"\n";
	//impresion con printf
	printf("el area mide: %5.0f\n", area);
	printf("el perimetro mide: %5.2f\n", perimetro);
	return 0;
	
}
	