//IMAHI EDUARDO DEL REAL RANGEL NC:24040987
#include <iostream>
#include <windows.h>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float lado1, lado2,lado3,base,altura;

	cout<<"dame la medida de lado 1: ";
	cin>>lado1;
	cout<<"dame la medida de lado 2: ";
	cin>>lado2;
	cout<<"dame la medida de lado 3: ";
	cin>>lado3;
	cout<<"dame la base del triangulo: ";
	cin>>base;
	cout<<"dame la altura del triangulo: ";
	cin>>altura;
	
	float areaheron, areanormal, s;
	s=(lado1+lado2+lado3/2);
	areaheron=sqrtf(s*(s-lado1)*(s-lado2)*(s-lado3));
	areanormal=base*altura/2;
    
	cout<<"el area de heron es: "<<areaheron<<"\n";
	cout<<"el area normal es: " <<areanormal<<"\n";
	
	return 0;
}