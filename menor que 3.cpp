//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{3
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int uno, dos, tres, menor;
	char nombre[20];
	gotoxy(25,2);
	cout<<"INSTITUTO TECNOLOGICO DE DURANGO";
	gotoxy(28,3);
	cout<<"FUNDAMENTOS DE PROGAMAION";
	cout<<"progama que determina cual es el menor de 3 numeros";
	gotoxy(10,5);
	cout<<"dime tu nombre: ";
	gets(nombre);
	gotoxy(10,6); cout<<"dime el primer numero: "; cin>>uno;
	gotoxy(10,7); cout<<"dime el segundo numero: "; cin>>dos;
	gotoxy(10,8); cout<<"dime el tercer numero: "; cin>>tres;
	if (uno<dos && uno< tres)
	{
	menor=uno;
}
else
{
	if (dos<uno&& dos<tres)
	{
		menor=dos;

}
else
{
	menor=tres;
}
}
gotoxy(10,10);
cout<< nombre <<" el menor de los 3 numeros es: "<<menor;
return 0;
}