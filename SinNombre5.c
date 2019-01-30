#include<stdio.h>
int main (void)
{
	char nc [100] ;
	int pre , total , iva , d , pagar , np;
	printf("Escribe el nombre del cliente\n");
	gets(nc);
	printf("Escribe el numero de articulos\n ");
	scanf("%i",&np);
	printf("Escribe su precio\n");
	scanf("%i",&pre);
	total = pre * np;
	if(total > 500)
	{
		d = total * 0.1;
		iva = (total + d) * 0.21;
		pagar = iva + (total - d);
	}
	else
	{
    	iva = total * 0.21;	
    	pagar = iva + total ;
    	d = 0;
	}
	printf("\nFactura \n");
	printf("Cliente %s \n", nc);
	printf("Articulos \t Precio/un \t Total \n");
	printf("%i relojes 	  %i \t\t %i \n", np , pre , total);
	printf("Descuento %i € \n", d);
	printf("Iva %i € \n", iva);
	printf("A pagar %i € \n", pagar);
	
}
