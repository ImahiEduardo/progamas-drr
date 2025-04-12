//IMAHI EDUARDO DEL REAL RANGEL 24040987
#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
   SetConsoleCP(CP_UTF8); 
   SetConsoleOutputCP(CP_UTF8); 
   int x=1;
   string clave;
   for(x=1;x<4;x++)
   {
   	  printf("dame tu password sin espacios en blanco (intento #%d)",x);
   	
   	  cin>>clave;
   	  if(clave=="soloyolose")
   	  break;
   }
   if(x==4)
    puts("\ausuario no autorizado");
    else
	printf("bienvenido al intento #%d",x);
	
	 
   

return 0;
}