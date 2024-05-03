Proceso SumaDeLosNumerosNaturalesDesde1
	Definir n, suma, i Como Entero;
	
	Escribir "Dime hasta donde quieres sumar los numeros naturales empezando por 1:";
	leer n;
	suma <- 0;
	Para i <- 1  hasta n hacer 
		suma <- suma + i;
	FinPara
	Escribir "La suma de los numeros naturales es", suma;
	
FinProceso
