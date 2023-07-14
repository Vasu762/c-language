#include<stdio.h>
	void main()
	{
	int a[3],b[3],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		printf("enter a[%d][%d]:,i,j);
		scanf("%d",&a[i][j]);
		

		printf("enter b[%d][%d]:,i,j);
		scanf("%d",&b[i][j]);
		}
	}

		

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		printf("%d",a[i][j]);
		}
		
		for(j=5;j<0;j--)
		{
		printf("%d",b[i][j]);
		}