Proceso ProductoPuntoDosVectoresMismaLongitud
	Definir vector1, vector2, Producto, total como Entero;
	Dimension vector1[10];
	Dimension vector2[10];
	Dimension Producto[10];
    Definir i como Entero;
	
	total <- 0;

    Para i <- 0 hasta 2 Hacer
        Escribir "Arreglo 1";
        Escribir "Dime un numero", i + 1, ":";
        Leer vector1[i];
    FinPara
	
    Para i <- 0 hasta 2 Hacer
        Escribir "Arreglo 2";
        Escribir "Dime un numero", i + 1, ":";
        Leer vector2[i];
    FinPara
    
	
	
    Para i <- 0 hasta 2 Hacer
        Producto[i] <- (vector1[i] * vector2[i]);
		total <- total + Producto[i];
    FinPara
	Escribir "El producto de los dos vectores es:", total;
	
FinProceso
