Proceso PromedioGeneral10Estudiantes
	definir i, n, acum, prom, dato Como Real;
	Escribir "Ingrese el numero de estudiantes:";
    Leer n;
    
    acum<-0;
    
    Para i<-1 Hasta n Hacer
        Escribir "Ingrese la nota del estudiante ",i,":";
        Leer dato;
        acum<-acum+dato;
    FinPara
    
    prom<-acum/n;
    
    Escribir "El promedio general es: ",prom;
	
FinProceso
