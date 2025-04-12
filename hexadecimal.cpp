//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include<stdio.h>
#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char c;
	char letras[20]="hexadecimal";
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';
	printf("impresion simple\n");
	printf("la variable char tiene un valor de %c\n varint=%d\n varfloat=%f\n cadena=%s", c, i, f, letras);
	system("pause");
	printf("impresion sin espacios \n");
	printf("%d%f%c%s\n",i,f,c,letras);
	printf("impresion con etiquetas\n");   
	printf("entero: %d flotante: %f caracter: %c cadena: %s\n",i,f,c,letras);
	system("pause");
	printf("dame un entero: ");
	fflush(stdin);
	scanf("%d",&i);
	puts("dame un flotante: ");
	scanf("%f",&f);
	cout<<"dame un caracter: ";
	fflush(stdin);
	c=getchar();
	printf("dame una cadena: ");
	fflush(stdin);
	scanf("%[^\n]",letras);
	printf("entero: %d, flotante: %f, caracter: %c, cadena: %s\n",i,f,c,letras);
	i=12345;
	f=345.678;
	printf("probando diferentes anchos en enteros: 3, 5 y 8 espacios\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%3d %5d %8d\n",1,10,20);
	printf("%3d %5d %8d\n",i,i,i);
	printf("%d %d %d\n",1,10,20);
	system("pause");
	printf("probando anchos en floats: 3, 10 y 13 espacios\n");
	printf("%3f %10f %13f\n",f,f,f);
	system("pause");
	printf("probando anchos en floats: 3, 10 y 16 espacios\n");
	printf("%3f %10f %16f\n",f,f,f);
	system("pause");
	printf("especificando solo las cifras decimales 1 decimal\n");
	printf("%.1f\n",f);
	system("pause");
	printf("probando diferentes precisiones en cadenas: 10 y 15 y 15.5 y .5\n");
	printf("%10s %15s %15.5s %.5s", letras, letras, letras, letras);
	system("pause");
	printf("impresion con signo: %+d\n",i);
	printf("impresion con espacion al principio y al final del dato con ceros\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%3d %-5d %-8d\n",i,i,i);
	printf("%03d %05d %08d\n",i,i,i);
system("pause");
printf("%d en octal es %#o y en hexadecimal es %#x",i,i,i);
return 0;
	
	
}