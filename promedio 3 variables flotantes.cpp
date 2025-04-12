//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include<windows.h>
#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int numh, numm, total;
	float pcth, pctm;
	cout<<"dime la cantidad de hombres asistentes: ";
	cin>>numh;
	cout<<"dime la cantidad de mujeres asistentes: ";
	cin>>numm;
	total=numh+numm;
	cout<<"el total de asistentes es "<<total<<"\n";
	pcth=numh*100/total;
	pctm=numm*100/total;
	cout<<"hombres: "<<pcth<<"%"<<" mujeres: "<<pctm<<"%";
	return 0;
}