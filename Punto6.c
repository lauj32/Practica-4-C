#include <stdio.h>
#include "punto6.h"

void initialize(struct t_date * ptr_date){
		
	(*ptr_date).day = 1;
	(*ptr_date).month = 1;
	(*ptr_date).year = 1970;
	
}


int main(){
	
	struct t_date date1;
	
	initialize(&date1);
	
	printf("date1 contiene : %d/%d/%ld \n", date1.day, date1.month,date1.year);
				
}
