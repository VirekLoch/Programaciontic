#include<stdio.h>
int main (void)
{
	int sum , mult;
	sum=0;
	mult=3;
	while(mult<=90)
	{
		sum= sum + mult;
		mult= mult +3;
	}
	printf("%d", sum);
	
}
