

#include <stdio.h>
#include "functions.h"

void main(){

	int a, b;

	printf("Introdueix un nombre: \n");
	scanf("%d", &a);

	printf("Introdueix un segon nombre: \n");
	scanf("%d", &b);

	intercanvi(a,b);

}
