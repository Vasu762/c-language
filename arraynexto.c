#include<stdio.h>
	int main()
{
	int a[5],b[5],i;
for(i=0;i<5;i++)
{
printf("enter the value A:");
scanf("%d",&a[i]);
}
	for(int i=0;i<5;i++)
	{
	printf("enter the value B:");
	scanf("%d",&b[i]);
	}
		
	for(i=0;i<5;i++)
	{
	printf("a[%d]:%d\n",i,a[i]);
	printf("a[%d]:%d",i,b[i]);
	}
}