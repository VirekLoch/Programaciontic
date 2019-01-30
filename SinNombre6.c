#include<stdio.h>
int main(void)
{
	int n1 , n2 , n3 ;
	printf("Escribe el primer numero\n");
	scanf("%i", &n1);
	printf("Escribe el segundo numero\n");
	scanf("%i", &n2);
	printf("Escribe el tercer numero\n");
	scanf("%i", &n3);
	if (n1 > n2)
		{	printf("El mayor es : %i",n1);
		}
	else 
	{
		if (n2>n3)
		{ 	printf("El mayor es : %i",n2);
		}
		else
		{	printf("El mayor es : %i",n3);
		}
	}
}
