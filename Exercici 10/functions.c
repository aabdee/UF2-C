
#include <stdio.h>
#include "functions.h"


void entrada(struct llibres *r){
    printf("Introdueix el nom del llibre: \n");
    scanf("%s", r->titol);

    printf("Introdueix l'autor del llibre: \n");
    scanf("%s",r->autor);

    printf("Introdueix l'editorial del llibre: \n");
    scanf("%s",r->editorial);

    printf("Introdueix dia de la publicació: \n");
    scanf("%d", &r->fecha.dia);

    printf("Introdueix el mes de publicació: \n");
    scanf("%d", &r->fecha.mes);

    printf("Introdueix l'any publicació: \n");
    scanf("%d", &r->fecha.any);

    printf("Unitats disponibles: \n");
    scanf("%d",&r->unitats_dis);

    printf("Introdueix l'usuari que l'ha agafat: \n");
    scanf("%s",r->usuari);

    printf("Temps de prèstec: \n");
    scanf("%d",&r->t_prestec);
}


void sortida (struct llibres r){

	printf("Aquestes són les dades del registre: \n");
    printf("Titol del llibre: %s\n", r.titol);
    printf("Autor del llibre: %s\n", r.autor);
    printf("Editorial del llibre: %s\n", r.editorial);
    printf("Data de publicació: %d - %d - %d\n", r.fecha.dia, r.fecha.mes, r.fecha.any);
    printf("Unitats disponibles: %d\n", r.unitats_dis);
    printf("Usuari que l'ha agafat: %s\n", r.usuari);
    printf("Temps de prèstec: %d\n", r.t_prestec);
}
