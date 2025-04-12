//IMAHI EDUARDO DEL REAL RANGEL 24040987
//EMMANUEL FIERRO CASTILLO 24040993

#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int main()
{
SetConsoleOutputCP(CP_UTF8);	
SetConsoleCP(CP_UTF8);
int ed;
char cont='S';
while(cont=='S' ||cont=='s'){
cout<<"ingresa la edad de la persona: ";
cin>>ed;

if(ed<0 || ed>100){
cout"edad invalida";
}
else if(ed<=17){
cout<<"es un niño\n";
}
else if(ed<=29){
cout<<"es un joven\n";
}
else if(ed<=59){
cout<<"es un adulto\n";
}
else{
cout<<"es un adulto mayor\n";
}
cout<<"quieres seguir viendo edades?";
cin>>cont;
cout<<"\n";
}
return 0;
