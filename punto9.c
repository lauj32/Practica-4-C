

#include <stdio.h>
#include "punto9.h"
#define T_INT 1
#define T_FLOAT 2
#define T_STR 3


int main(){

	int res,x;
	
	res = scanf("%d",&x);
	
	T_union una_union;
	
	
	if(res == 1) {
	
		if(x == T_INT){
			una_union.ival = 4;
			printf("El valor entero es union.ival %d\n",una_union.ival);
		}
		
		else if(x == T_FLOAT) {
			una_union.fval = 0.5;
			printf("El valor float es union.fval %f\n",una_union.fval);
		}
		
		
		else if(x == T_STR){
			una_union.sval = "hola";
			printf("El valor string es union.sval %s\n",una_union.sval);
		}
	
	} 
	else return 1;

}
