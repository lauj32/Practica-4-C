#include "punto10.h"
#include <stdio.h>


int main(){

	t_alumno alumno0 , alumno1;
	
	initialize(&alumno0);
	initialize(&alumno1);
	
	//El programa initialize funciona bien
	
	printf("%s\n",convert_to_string(alumno0));
	printf("%s\n",convert_to_string(alumno1));

	//Convert funciona bien
	
	if(compare(alumno0,alumno1) == 1) printf("Los alumnos son iguales\n");
	else printf("Los alumnos son diferentes\n");
	
	

}
