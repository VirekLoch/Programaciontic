#include<stdio.h>
int main (void)
{
int dia, deuda, pagado,d;
dia=1;
deuda=99;
pagado=1;
while(d>=0)
{
	deuda=deuda+100;
	dia=dia+1;
	pagado=pagado*2;
	d=deuda-pagado;
	}	
	printf("%d",dia);
}

