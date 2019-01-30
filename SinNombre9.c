#include<stdio.h>
int main (void)
{
	int t;
	char np [10];
	printf("Escribe el nombre del producto \t\t");
	scanf("%c",&np);
	printf("\nSu nivel de toxicidad\t\t");
	scanf("%i",&t);
    if(t=10)
    {
    printf("penee");	
	}
	else{
		 if(t=11)
		 {
		 	 printf("baja toxicidad");
		 }
		 else{
		 	 if(t=12)
		 	 {
		 	 	printf("media toxicidad");
			  }
			  else
			  {
			  	 if(t=13)
			  	 {
			  	 	printf("alta toxicidad");
				   }
				   else{
				   	 printf("muy alta toxiciddad");
				   }
			  }
		 }
	}
	printf("\nSu nivel de toxicidad\t\t");
}
