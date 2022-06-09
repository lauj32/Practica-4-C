#include "punto10.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void initialize (t_alumno * alum){

	int res,c,i, tam = 20;
	
	alum->nom = malloc( sizeof(char)*tam );
	alum->ape = malloc( sizeof(char)*tam );

	printf("Proceda a ingresar datos del alumno\n");
	
	printf("Ingrese un nombre\n");
	
	i = 0;
	while( ((c = getchar()) != '\n')&&(i < tam) ) {
		alum->nom[i] = c;
		i++;
	}
	alum->nom[i] = '\0';
	
	if(c != '\n') while( (c = getchar()) != '\n'); //Limpia el buffer si lo ultimo leido no fue un \n (Salio por la condicion de i)
	
	printf("Ingrese un apellido\n");
	
	i = 0;
	while( ((c = getchar()) != '\n')&&(i < tam) ) {
		alum->ape[i] = c;
		i++;
	}
	alum->ape[i] = '\0';
	
	if(c != '\n') while( (c = getchar()) != '\n');
	
	printf("Ingrese una fecha de nacimiento\n Utilice el formato \"x/x/xxxx\" \n");
	res = 0;
	while(res != 3){
		res = scanf("%d/%d/%d",&(alum->fecha_nac.dia), &(alum->fecha_nac.mes), &(alum->fecha_nac.año));
		if(res != 3) while( (c = getchar()) != '\n');
	}
	
	
	printf("Ingrese un numero de legajo\n");
	res = 0;
	while(res != 1){
		res = scanf("%ld",&(alum->legajo));
		if(res != 1) while( (c = getchar()) != '\n');
	}
	
	
	printf("Ingrese un tipo de documento\n");
	res = 0;
	while(res != 1){
		res = scanf("%hd",&(alum->tipo_doc));
		if(res != 1) while( (c = getchar()) != '\n');
	}
	

	printf("Ingrese un numero de documento\n");
	res = 0;
	while(res != 1){
		res = scanf("%ld",&(alum->documento));
		if(res != 1) while( (c = getchar()) != '\n');
	}
	
	while( (c = getchar()) != '\n');

}

char * convert_to_string(const t_alumno alum){

	//Entra bien

	
	char * doc = malloc( sizeof(char)*20);
	char * lega  = malloc( sizeof(char)*20);
	char * day  = malloc( sizeof(char)*20);
	char * month  = malloc( sizeof(char)*20);
	char * year  = malloc( sizeof(char)*20);
	
	int i , j,p;
	
	//Las variables se inicializan bien
	
	sprintf(doc, "%ld" , alum.documento);
	sprintf(lega, "%ld" , alum.legajo);
	
	sprintf(day, "%d" , alum.fecha_nac.dia);
	sprintf(month, "%d" , alum.fecha_nac.mes);
	sprintf(year, "%d" , alum.fecha_nac.año);
	
	//Las conversiones a string se hacen bien
	//printf("%s , %s , %s , %s , %s \n", doc, lega , day , month , year);
	
	char * vec[5];
	
	vec[0] = doc;
	vec[1] = lega;
	
	vec[2] = day;
	vec[3] = month;
	vec[4] = year;
	
	//Asigna bien los strings
	
	char * text;
	text = malloc( sizeof(char) * (strlen(doc)+strlen(lega)+strlen(day)+strlen(month)+strlen(year) + 50) );
	
	p = 0;
	for(i = 0; i < 5 ; i++){
		for(j = 0; j < strlen(vec[i]) ; j++){
			text[p] = vec[i][j];
			p++;
		}
		
		if((i == 2)||(i == 3)){
			text[p] = '/';
			p++;
		}
		else{
			text[p] = '-';
			p++;
			text[p] = '-';
			p++;
			text[p] = '-';
			p++;
		}
	
	}
	
	text[p] = '\0';
	
	return text;

}


short compare(const t_alumno alum1 , const t_alumno alum2){

	if( strcmp(alum1.nom,alum2.nom) != 0) return 0; 
	else
		if( strcmp(alum1.ape,alum2.ape) != 0) return 0; 
		else 
			if( alum1.fecha_nac.dia != alum2.fecha_nac.dia ) return 0;
			else
				if( alum1.fecha_nac.mes != alum2.fecha_nac.mes ) return 0;
				else
					if( alum1.fecha_nac.año != alum2.fecha_nac.año ) return 0;
					else return 1;

}


void destroy(const t_alumno ) ; //No se como resolverlo






















