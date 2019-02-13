#include<stdio.h>
int main (void)
{
	char nom[100];
	float sb , ss , imp , sn;
	printf("Nombre del empleado\n");
	gets(nom);
	fflush(0);
	printf("Su sueldo bruto \n");
	scanf("%f", &sb);
	ss = sb * 0.06;
	imp = sb * 0.1;
	sn = sb - imp - ss;
	printf("Nomina de %s \n",nom);
	printf("Sueldo bruto %f €€\n",sb);
	printf("SS %f \n",ss);
	printf("Impuestos 10%%  %f \n",imp);
	printf("Sueldo neto %f \n",sn);
		
}
