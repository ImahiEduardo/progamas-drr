//IMAHI EDUARDO DEL REAL RANGEL 24040987
Proceso Funciones_Cadena
	Definir cad1, cad2 como cadena;
	definir num Como Entero;
	cad1<-"Mecatr�nica";
	Escribir "La longitud de cad1 es ", Longitud(cad1);
	Escribir "El primer caracter de cad1 es ", Subcadena(cad1,0,0);
	Escribir "El ultimo caracter de cad1 es ", Subcadena(cad1,Longitud(cad1)-1,Longitud(cad1)-1);
	Escribir "La cad1 en may�sculas es ", Mayusculas(cad1);
	cad2<-Concatenar(cad1, " es muy importante ");
	escribir cad2;
	num<-ConvertirANumero("10");
	Escribir num;
	Escribir Concatenar("El numero es ",ConvertirATexto(num));
	Escribir "El numero es ",num;
FinProceso
