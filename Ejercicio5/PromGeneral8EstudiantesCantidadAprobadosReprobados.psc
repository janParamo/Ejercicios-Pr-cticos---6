Proceso PromGeneral8EstudiantesCantidadAprobadosReprobados
	definir alumnos, alumno, i, aprobados, reprobados, suma Como Entero;
	definir promedio Como Real;
	Escribir "Cuantos alumnos hay?";
	leer alumnos;
	suma <- 0;
	aprobados <- 0;
	reprobados <- 0;
	Para i <- 0 hasta alumnos-1 Con Paso 1 Hacer
		escribir "Nota del alumno", i+1;
		leer alumno;
		suma <- suma + alumno;
		si alumno >= 70 entonces
			aprobados <- aprobados + 1;
		FinSi
		si alumno < 69 Entonces
			reprobados <- reprobados + 1;
		FinSi
	FinPara
	promedio <- suma/alumnos;
	Escribir "Los alumnos aprobados son:", aprobados;
	escribir "Los alumnos reprobados son:", reprobados;
	Escribir "El promedio general es:", promedio;
	
FinProceso
