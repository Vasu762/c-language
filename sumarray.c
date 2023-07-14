#include<stdio.h>
	void main()
{
	int a[5],b[5],i,j;
	for(i=0;i<5;i++)
	{
	printf("enter the value A:");
	scanf("%d",&a[i]);
	}
		for(j=0;j<5;j++)
		{
		printf("enter the valude B:");
		scanf("%d",&b[j]);
		}
		
			for(i=0;i<5;i++)
			{
			printf("a[%d]:%d\t",i,a[i]);
			printf("b[%d]:%d\t",i,b[i]);
			printf("a[%d] + b[%d] %d\n",i,i,a[i]+b[i]);
			}
}