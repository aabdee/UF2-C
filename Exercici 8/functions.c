/*
 * functions.c
 *
 *  Created on: 26 ene 2022
 *      Author: admin-pg
 */

int enter(){

	int num;

	do{
		printf("Introdueix un nombre natural: \n");
		scanf("%d", &num);
	}while(num<1);

	return num;
}

int enter2(){

	int num;

	do{
		printf("Introdueix el nombre al que vols elevar: \n");
		scanf("%d", &num);
	}while(num<1);

	return num;
}


void final(num1,num2){

	int cont,aux=1;

	for (cont=0;cont<num2;cont++){

		aux=num1*aux;
	}

	printf("Resultat: %d",aux);

}

