//IMAHI EDUARDO DEL REAL RANGEL 24040987
Proceso Gimmie_your_name
	Definir edad Como Caracter;
	Definir numero_de_control Como Caracter;
	Definir nombre Como Caracter;
	Escribir "hola mundo";
	Escribir "Dime tu nombre";
	Leer nombre;
	Escribir "Dime tu numero de control";
	//Se puede resumir la variable todo y tan solo tenga la variable definida
	Leer numero_de_control;
	Escribir "Dime tu edad";
	Leer edad;
	//edad<-abs(edad);
	//El borrador de pantalla es basicamente eso, a la hora de llegar a dicho punto de agregar tantos datos este borrara todo los datos despues de dicha instruccion
	//Borrar Pantalla;
	//Escribir " de ", abs(edad), " a�os ";
	Escribir "Adios ", nombre, " con n�mero ", numero_de_control, " de ", edad, " a�os ";
	//Escribir Concatenar("Adios", nombre);
	Escribir " Hoy es: ", FechaActual();
	Escribir " Y la hora es: ", HoraActual();
	
FinProceso
