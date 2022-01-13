/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: admin-pg
 */


#include <stdio.h>
#include "functions.h"

void main(){
	int num1, num2;

	num1 = validate(0);
	num2 = validate(0);

	if(num1>num2){
		printf("num1 es mes gran");
	}
	else{
		if(num2>num1){
			printf("num2 es més gran");
		}
		else{
			printf("son iguals");
		}
	}
}


