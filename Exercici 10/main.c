/*
 * main.c
 *
 *  Created on: 26 ene 2022
 *      Author: admin-pg
 */


#include <stdio.h>
#include "functions.h"

void main() {
    struct llibres registre;
    struct data fecha;
    entrada(&registre,&fecha);//es passa per referència
    sortida(registre); //es passa per valor
}

