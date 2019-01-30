	#include<stdio.h>
	int main(void)
	{
		char n1 [100] ;
		char xy [100] ;
		int e1, e2 ;
		printf("Escribe el nombre del primero\n");
		gets(n1);
		printf("Escribe su edad\n");
		scanf("%i",&e1);
		printf("Escribe el nombre del segundo\n");
		fflush(0);
		scanf("%s",&xy);
		printf("Escribe su edad\n");
		scanf("%i",&e2);
		if(e1 > e2)
		{
			printf("El mayor es %s " , n1);
		}
		else
		{
			printf("El mayor es %s " , xy);
		}
	}
