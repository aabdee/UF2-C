/*
 * functions.c
 *
 *  Created on: 26 ene 2022
 *      Author: admin-pg
 */

int intercanvi(int a, int b){

	int aux;

	aux = a;
	a = b;
	b = aux;

	printf("Els dos nombres intercanviats són:\n");
	printf("%d ", a);
	printf("%d", b);
}
