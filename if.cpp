//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int cal;
	cout<<"dame una calificacion: ";
	cin>>cal;
	if (cal>=70)
	cout<<"aprobatoria\n";
	system("pause");
	system("cls");
	cout<<"dime otra calificacion: ";
	cin>>cal;
	if(cal>=70)
	cout<<"suficiente\n";
	else
	cout<<"no suficiente\n";
	system("pause");
	system("cls");
	//?
	cout<<"dime una calificacion: (evaluando con ?) ";
	cin>>cal;
	cal>=70?cout<<"suficiente\n":cout<<"no suficiente\n";
	//if con mas de una indicacion
	cout<<"dame una calificacion: ";
	cin>>cal;
	if(cal>=70)
	{
		printf("la calificacion obtenida es: ");
		cout<<"suficiente\n";
	}
	else
	{
		printf("la calificacion obtenida es: ");
		cout<<"no suficiente\n";
	}
	return 0;
	}