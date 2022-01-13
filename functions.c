


int natural(int a, int b){
    int num, i=0;

    do{
    	printf("Introdueix un nombre entre 10 i 5000: \n");
    	scanf("%d", &num);
    	i+=1;
    	if(i==3){
    		printf("T'has quedat sense intents\n");
    		abort();
    	}
    }while (num<a || num>b);

    return num;
}
