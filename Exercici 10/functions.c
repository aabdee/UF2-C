/*
 * functions.c
 *
 *  Created on: 26 ene 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"


void entrada(struct llibres *r, struct data *d){//punter a office
    printf("Introdueix el nom del llibre: \n");
    scanf("%s", r->titol);

    printf("Introdueix l'autor del llibre: \n");
    scanf("%s",r->autor);

    printf("Introdueix l'editorial del llibre: \n");
    scanf("%s",r->editorial);

    printf("Introdueix la data de publicació: \n");
    scanf("%d%d%d", d->dia, d->mes, d->any);

    printf("Unitats disponibles: \n");
    scanf("%d",r->unitats_dis);

    printf("Introdueix l'usuari que l'ha agafat: \n");
    scanf("%s",r->usuari);

    printf("Temps de prèstec: \n");
    scanf("%d díes",r->t_prestec);

}


void sortida (struct llibres r, struct data d){

	printf("Aquestes són les dades del registre: \n");
    printf("Titol del llibre: %s\n", r.titol);
    printf("Autor del llibre: %s\n", r.autor);
    printf("Editorial del llibre: %s\n", r.editorial);
    printf("Data de publicació: %d - %d - %d\n", d.dia, d.mes, d.any);
    printf("Unitats disponibles: %d\n", r.unitats_dis);
}




