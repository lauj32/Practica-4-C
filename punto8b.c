#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "punto8.h"

int main(){

	t_alumno_b alumno;
	
	alumno.nom = malloc( sizeof(char)*20 );
	alumno.ape = malloc( sizeof(char)*20 );
	
	strcpy(alumno.nom,"ramiro");
	strcpy(alumno.ape,"Josin");
	alumno.fecha_nac.dia = 5;
	alumno.fecha_nac.mes = 8;
	alumno.fecha_nac.año = 2001;
	alumno.legajo = 186969;
	alumno.tipo_doc = 0;
	alumno.documento = 43505906;
	
	
	t_alumno_b alumno1 = alumno;
	
	printf("nombre : %s \n"
	       "apellido: %s \n"
	       "fecha nac: %d/%d/%ld \n"
	       "legajo: %ld \n"
	       "tipo doc: %d \n" 
	       "doctumento: %ld \n\n", alumno.nom, alumno.ape, alumno.fecha_nac.dia,alumno.fecha_nac.mes,alumno.fecha_nac.año, \
	       alumno.legajo,alumno.tipo_doc,alumno.documento);
	       
	printf("nombre : %s \n"
	       "apellido: %s \n"
	       "fecha nac: %d/%d/%ld \n"
	       "legajo: %ld \n"
	       "tipo doc: %d \n" 
	       "doctumento: %ld \n\n", alumno1.nom, alumno1.ape, alumno1.fecha_nac.dia,alumno1.fecha_nac.mes,alumno1.fecha_nac.año, \
	       alumno1.legajo,alumno1.tipo_doc,alumno1.documento);
	           
	           
	strcpy(alumno.nom,"Juan"); 
    
	 
	 printf("nombre : %s \n"
	       "apellido: %s \n"
	       "fecha nac: %d/%d/%ld \n"
	       "legajo: %ld \n"
	       "tipo doc: %d \n" 
	       "doctumento: %ld \n\n", alumno.nom, alumno.ape, alumno.fecha_nac.dia,alumno.fecha_nac.mes,alumno.fecha_nac.año, \
	       alumno.legajo,alumno.tipo_doc,alumno.documento);
	       
	 printf("nombre : %s \n"
	       "apellido: %s \n"
	       "fecha nac: %d/%d/%ld \n"
	       "legajo: %ld \n"
	       "tipo doc: %d \n" 
	       "doctumento: %ld \n\n", alumno1.nom, alumno1.ape, alumno1.fecha_nac.dia,alumno1.fecha_nac.mes,alumno1.fecha_nac.año, \
	       alumno1.legajo,alumno1.tipo_doc,alumno1.documento);

}
