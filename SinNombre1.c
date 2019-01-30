#include<stdio.h>
int main (void)
{
	int n1 , n2 , n3 , sum , total;
	printf("Escribe 3 Numeros\n");
	scanf("%d",&n1);
	fflush(0);
	printf("segundo numero\n");
	scanf("%d",&n2);
	fflush(0);
	printf("tercer numero\n");
	scanf("%d",&n3);
	fflush(0);
	sum = n1 +n2 + n3;
	total = sum/3;
	printf("El total es %d", total);
	
}

