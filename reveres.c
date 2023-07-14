#include<stdio.h>
	void revers number()
	{
	int  a[5],i,j,swap;
	for(i=0;i<5;i++)
	{
		printf("enter the value[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++)
	{
	swap=a[j];
	a[j]=a[i-1-j];
	a[i-1-j]=swap;
	}
	for(j=0;j<5;j++)
	{
	printf("%d",a[j]);
	}
}
void main()
{
	revers number();
}