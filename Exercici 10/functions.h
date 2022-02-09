

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <stdio.h>

struct data{
	int dia;
	int mes;
	int any;
};

struct llibres{
	char titol[50];
	char autor[25];
	char editorial[20];
	int data_pub;
	int unitats_dis;
	char usuari[20];
    int t_prestec;
    struct data fecha;
};


#endif /* FUNCTIONS_H_ */a
