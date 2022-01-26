/*
 * main.c
 *
 *  Created on: 26 ene 2022
 *      Author: admin-pg
 */


#include <stdio.h>
#include "functions.h"

void main(){

	int a, b;

	printf("Introdueix un nombre: \n");
	scanf("%d", &a);

	printf("Introdueix un segon nombre: \n");
	scanf("%d", &b);

	intercanvi(&a,&b);

	printf("Els dos nombres intercanviats són:\n");
	printf("%d ", a);
	printf("%d", b);

}

