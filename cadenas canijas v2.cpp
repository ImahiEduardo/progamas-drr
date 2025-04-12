//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
	char cad[80];
	string cad2;
	char c;
	puts ("dame una cadena");
	gets (cad);
	puts ("ejemplo de una impresion con puts");
	puts(cad);
	printf("ejemplo de una impresion con printf: ");
	printf(cad);
	printf("\nPresiona una tecla y continua automaticamente: ");
	
	c=getche();
	puts("\n");
	putchar(c);
	puts("\n");
	printf("\nPresiona una tecla y luego enter: ");
	c=getchar();
	putchar(c);
	puts("\n");
	
	std :: cout << "dame una cadena con cin: ";
	std :: cin >> cad;
	cout<<"\nla segunda cadena no tiene espacios: " <<cad;
	cout<<"\ndame una cadena con espacios: ";
	fflush(stdin);
	getline(cin, cad2);
	cout<<"la cadena es " << cad2 <<  " ya con espacios" <<"\n";
	cout<<"captura de un arreglo char con getline\n";
	getline(cin,cad2);
	cout<<"el arreglo es: " <<cad2 <<  " \n";
	return 0;
}