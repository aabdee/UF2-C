


int validate(int value){
	int num;

	do{
		printf("Introdueix un nombre entre 10 i 5000: \n");
		scanf("%d", &num);
	}while (num<10 || num>5000);

	return num;
}

