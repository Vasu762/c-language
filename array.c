#include<stdio.h>
	void main()
	{
	int i,a[5][5],j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enter the valuea :a[i][j]");
		scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d",a[i][j]);
		}
				printf("\t");
				for(j=0;j<3;j++)	
				{
				printf("%d",a[j][i]);
				}
			
		printf("\n");
	}
}	