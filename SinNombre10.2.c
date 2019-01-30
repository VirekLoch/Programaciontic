#include<stdio.h>
int main (void)
{
	int n1,n2,n3,sum,x , y;
	printf("Hola\n");
	scanf("%c");
	printf("Escribe el primer num\t");
	scanf("%d \n",&n1);
	printf("Escribe el segundo num\t");
	scanf("%d \n",&n2);
	printf("Escribe el tercer num\t");
	scanf("%d \n",&n3);
	sum=0; x=1; y =0;
	while(x<=30)
	{
		y = n1*x;
		x=x+1;
		sum=sum + y;
	}
	x=1;
		while(x<=30)
	{
		y = n2*x;
		x=x+1;
		sum=sum + y;
	}
	x=1;
		while(x<=30)
	{
		y = n3*x;
		x=x+1;
		sum=sum + y;
	}
    printf("%d",sum);
}
