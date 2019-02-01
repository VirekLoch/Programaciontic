#include<stdio.h>
int main (void)
{
	char nom[100];
	int sb , ss , imp , sn;
	printf("Nombre del empleado\n");
	gets(nom);
	fflush(0);
	printf("Su sueldo bruto \n");
	scanf("%i", &sb);
	ss = sb * 0.06;
	imp = sb * 0.1;
	sn = sb - imp - ss;
	printf("Nomina de %s \n",nom);
	printf("Sueldo bruto %d \n",sb);
	printf("SS %d \n",ss);
	printf("Impuestos 10%%  %d \n",imp);
	printf("Sueldo neto %d \n",sn);
		
}
