#include<stdio.h>
int main(void)
{
int x,y,z;
y=1;

while(y<6)
{
	x=0;
	printf("\n Tabla del %d \n",y);
	while(x<11)
	{
		z=x*y;
		printf("%d * %d = %d \n",x,y,z);
		z=0;
		x++;
		
	}

y++;
	
}	
}

