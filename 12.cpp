
//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include<iostream>
using namespace std;
int main()
{
   SetConsoleCP(CP_UTF8); 
   SetConsoleOutputCP(CP_UTF8); 
   int x,y=1;
   cout<<"Lectura de 5 numeros enteros usando do while \n";
    do{ 
   	cout<<"dame un numero que no sea 0 (intento #"<<y<<")\n";
   	cin>>x;
   	if(x==0)
   	 continue;
   	 cout<<"Por aqui pasa solo cuando el mumero s diferente de 0\n";
   	 y++;
    }while(y<6);
   system("PAUSE");
   /*en ciclos do while o while con cotador un continue afecta al numero de vueltas originales, si estam definidas 5 vueltas, se ejecutaran 5 vueltas vvalidas 
   aunque se hayan ejecutao 10 no validas,dando un total de 15 repeticiones, en un ciclo for estandar esto no ocurre, si son 5 vueltas se daran solo 5 vueltas sean o no sean validas*/
  system("CLS");
   cout<<"lectura de 5 numeros enteros usando un for estandar\n";
   for(y=1;y<6;y++)
   {
   	cout<<"dame un numero que no sea 0 (intento #"<<y<<")\n";
   	cin>>x;
   	if(x==0)
    continue;
    cout<<"por aqui pasa solo cuando e numero es diferente de 0\n";
    //y++; para que s comporte como el do o while

   }
   
return 0;
}