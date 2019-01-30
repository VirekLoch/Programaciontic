#include<stdio.h>
	int vprim=0,num , i, rest;
	
int primo(int num)
{
	for(i=2;i<num; i++)
	{
        if(num%i==0)
		{
           return 0;
        }
    }
    if(num==0)
	{
     return 0;
    }
    return 1; 
}

int main (void)
{

	printf("Escribe un numero:\n");
	scanf("%d",&num);
	vprim = primo(num);
	if(vprim==1)
	{
		printf("El numero %d es primo\n",num);
	}
	else
	{
		printf("El numero %d no es primo\n",num);
	}
	
}

