#include<stdio.h>
	int main()
	{
	int i,j,sp=20;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=sp)
		{
			printf("  ");
			j++;
		
			j=1;
			while(j<=i)
			{
				printf("*");
				j++;
			}
			printf("\n");
			i++;
		}


	}
}