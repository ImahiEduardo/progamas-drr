//IMAHI EDUARDO DEL REAL RANGEL 24040987
Proceso Practice_4
	//Ejercicio 16
	Definir v1,v2,d,t Como Entero;
	Escribir "Ingresa la distancia entre los 2 autos";
	Leer d;
	Escribir "Muy bien, ahora ingresa la velocidad del auto de adelante";
	Leer v1;
	Escribir "Y el de atr�s";
	Leer v2;
	Si v2>v1 Entonces
		t<-d%(v2-v1);
		t<-t*60;
		Escribir "El veh�culo m�s r�pido alcanzar� al otro en ",t," minutos.";
	SiNo
		Escribir "El veh�culo que est� detr�s no alcanzar� al que est� delante";
	FinSi
	//Ejercicio 20
	Esperar 1 Segundos;
	Definir e2,e1,c50,c20,c10 Como Entero;
	Definir TE,TC Como Real;
	Escribir "Ingrese la cantidad de monedas de 1 euro: ";
	Leer e1;
	Escribir "Ingrese la cantidad de monedas de 2 euro: ";
	leer e2;
	Escribir "Ingrese la cantidad de monedas de 50 centimos: ";
	leer c50;
	Escribir "Ingrese la cantidad de monedas de 20 centimos: ";
	leer c20;
	Escribir "Ingrese la cantidad de monedas de 10 centimos: ";
	leer c10;
	TE<-(e2*2)+(e1*1);
	TC<-(c50*0.50)+(c20*0.20)+(c10*0.10);
	Escribir "Total de dinero: ",TE," euros y ",TC," c�ntimos.";
	
FinProceso
