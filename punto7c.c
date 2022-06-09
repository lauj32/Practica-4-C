#include <stdio.h>
#include "punto7c.h"

void sizeof_members(t_algo * ptr_struct){

	printf("Sizeof del miembo 1 : %ld\n",sizeof(ptr_struct->a));
	printf("Sizeof del miembo 2 : %ld\n",sizeof(ptr_struct->b));

}

int main(){

	
	t_algo est1;
	
	est1.a = 2;
	est1.b = 'c';

	printf("La estructura tiene un sizeof de : %ld\n",sizeof(t_algo));
	sizeof_members(&est1);

	
}
