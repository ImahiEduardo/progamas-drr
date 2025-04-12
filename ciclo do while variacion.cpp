//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include<windows.h>
#include<iostream>
using namespace std;

void gotoxy(int x, int y){
COORD coord;
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
SetConsoleCP(CP_UTF8); 
SetConsoleOutputCP(CP_UTF8); 
int x,edad; 
char nom[10];
//Se puede usar p/una cantidad prestablecida de vueltas 
x=1;/*si no se inicializa al menos se ejecuta una vez*/

do{

cout<<x<<"\n";

x++;/*variación*/}

while(x<10);/*condición*/
system("PAUSE");
system("CLS");
do
{
cout<<"Dame la edad, <<0 para terminar>> "; 
cin>>edad; //variación
}while(edad!=0);
system("PAUSE");
return 0;
}
