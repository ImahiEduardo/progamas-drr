//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include <stdio.h>
#include <conio.h>

int main()
{
	char cad[80];
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
	return 0;
}