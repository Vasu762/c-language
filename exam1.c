#include<stdio.h>
	int main()
	{
	int h[5],g[5],e[5],i,total,pr;
	for(i=0;i<5;i++)
	{
	printf("enter the value h:");
	scanf("%d",&h[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("enter the value g:");
	scanf("%d",&g[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("enter the value e:");
	scanf("%d",&e[i]);
	}
	printf("hindi\t eng\t guj\t total\t pr\t gread");	
	for(int j=0;j<5;j++)
	{
		printf("%d\t",h[j]);
		printf("%d\t",g[j]);
		printf("%d\t",e[j]);
		total=h[j]+g[j]+e[j];
		printf("%d\t",total);
		pr=total*100/300;
		printf("%d",pr);
		
		if(pr >=80)
		{
		printf("A\n");
		}
			else if(pr >= 60)
			{
			printf("B\n");
			}
				else if(pr >=45)
				{
				printf("C\n");
				}
					else if( pr <= 35)
					{
					printf("falied\n");
					}
		
	}
}		
	