#include<stdio.h>
int main (void)
{
	float pr , pag , dev;
	float nom [100];
	printf("Introduce nombre de producto\n");
	scanf("%s",&nom);
	printf("Introduce su precio\n");
	scanf("%f",&pr);
	printf("Introduce lo pagado\n");
	scanf("%f",&pag);
	dev = pag - pr;
	printf("El producto es : %s \n",nom);
	printf("El precio es : %2f \n",pr);
	printf("Pagaste : %2f \n",pag);
	printf("Te devolvieron : %2f \n",dev);
}

