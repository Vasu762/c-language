#include<stdio.h>
	int main()
	{
	int a[5],b[5],i;
	for(i=0;i<5;i++)
	{
	printf("enter the value A:");
	scanf("%d",&a[i]);
	}
	for(int j=0;j<5;j++)
	{
	printf("enter the value b:");
	scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("a[%d]:%d\t",i,a[i]);
	printf("b[%d]:%d\n",i,b[i]);
	
	}
	}