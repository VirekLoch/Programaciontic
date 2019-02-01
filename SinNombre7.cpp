#include<stdio.h>
int main (void)
{
	float nt ;
	printf("Escriba la nota del alumno\n");
	scanf("%f", &nt);
	printf("\n");
	if(nt >= 5)
	{
		if(nt >= 6)
	 	{
		  	if(nt >= 7)
				{
					if(nt >= 8)
					{
			  			if(nt >= 9.5)
						{
							printf("matricula");
						}
						else 
						{
							printf("sobresaliente");
						}
					}
					else 
					{
						printf("Notable");
					}
				}
			else 
			{
				printf("Bien");
			}	
		}
		else 
		{
			printf("Suficiente");
		}
	}
	else
	{
	printf("Insuficiente");	
	}
}
