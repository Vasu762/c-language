
#include<stdio.h>
	int main()
{
	int i,j;
	char k;
	k='A';

	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(i%2==0)
			{
				printf("%c",k+32);
				k++;
			}
				else
				{
					printf("%c",k);
					k++;
					j++;
	
				}
		
				
		}
			
		printf("\n");
		i++;
	}
	
}