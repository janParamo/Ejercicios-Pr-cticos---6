Proceso SumaDeDosVEctoresDeIgualLongitud
	Definir array1, array2, array3 como Entero;
	Dimension array1[10];
	Dimension array2[10];
	Dimension array3[100];
    Definir i como Entero;
	
    Para i <- 0 hasta 4 Hacer
        Escribir "Arreglo 1";
        Escribir "Dime un numero";
        Leer array1[i];
    FinPara
	
    Para i <- 0 hasta 4 Hacer
        Escribir "Arreglo 2";
        Escribir "Dime un numero";
        Leer array2[i];
    FinPara
    
    array3[0] <- 0;
	
    Para i <- 1 hasta 4 Hacer
        array3[i] <- array3[i-1] + (array1[i-1] + array2[i-1]);
        Escribir array3[i];
    FinPara
	
FinProceso
