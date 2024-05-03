Proceso MatrizCambioDeFilasPorColumnas
	Definir matriz Como Entero;
    Dimension matriz[3,3];
    Definir i, j Como Entero;
	

    Para i <- 0 Hasta 2 Hacer
        Para j <- 0 Hasta 2 Hacer
            Escribir "Matriz";
            Escribir "Ingresa numero de, fila ", i+1, ", columna ", j+1, ":";
            Leer matriz[i,j];
        FinPara
        Escribir "";
    FinPara
	
	
   
    Escribir "Matriz:";
    Para i <- 0 Hasta 2 Hacer
        Para j <- 0 Hasta 2 Hacer
            Escribir matriz[i,j];
        FinPara
        Escribir "";
    FinPara
	
    Escribir "Matriz invertida:";
    Para i <- 0 Hasta 2 Hacer
        Para j <- 0 Hasta 2 Hacer
            Escribir matriz[j,i];
        FinPara
        Escribir "";
    FinPara
	
   
FinProceso
