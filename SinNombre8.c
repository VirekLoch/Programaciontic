#include<stdio.h>
int main (void)
{
    char  cur[10];
	char nom [100], cr  ;
	int e1 , e2 , e3 , curso , et , med;
	curso = 0;
	printf("Escribe el nombre\n");
	scanf("%s", &nom);
	fflush(0);
	printf("Escribe la primera nota\n");
	scanf("%i", &e1);
	fflush(0);
	printf("Escribe la segunda nota\n");
	scanf("%i", &e2);
	fflush(0);
	printf("Escribe la tercera nota\n");
	scanf("%i", &e3);
	printf("Escribe el curso\n");
	scanf("%i", &cr);

	switch(cr)
	{
		case 1 : 	printf("Calculo nota final \n");
	printf("Curso primero \n");  ;
		break;
		case 2 : 	printf("Calculo nota final \n");
	printf("Curso segundo \n"); ;
		break;
		case 3 : 	printf("Calculo nota final \n");
	printf("Curso tercero \n"); ;
		break;
		case 4 : 	printf("Calculo nota final \n");
	printf("Curso cuarto \n" );;
		break;
		default : printf("Curso Error\n");
		break;
	}
	et = e1 +e2 +e3;
	med = et/3;
	printf("Nombre %s\n",nom);
	printf("Nota 1 %i\n",e1);
	printf("Nota 2 %i\n",e2);	
	printf("Nota 3 %i\n",e3);
	printf("Nota media %i", med);

}
