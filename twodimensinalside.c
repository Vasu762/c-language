#include<stdio.h>
	int main()
	{
	int a[5][5],b[5][5],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enter b[%d][%d]:",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	

	for(i=0;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
		printf("%d"\n,a[i][j]);
		printf("%d",b[i][j]);
		}
	}
}