//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include <iostream>
#include <windows.h>
using namespace std;
//*Programa de validación de NIP*/ 5 
int main()
{
SetConsoleOutputCP (CP_UTF8);
 SetConsoleCP (CP_UTF8);
int nip=123; 
int intento=0;
cout<<"Teclea tu NIP: "; 
cin>>intento;
if(intento==nip)
{

printf("**Correcto**");
}
return 0;
}