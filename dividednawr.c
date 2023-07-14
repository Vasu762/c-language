#include<stdio.h>
	int dividede5()
	{
	int a;
	printf("enter the value  A:");
	scanf("%d",&a);
	if(a%5==0)
	{
	printf("divided");
	}
		else
		{
		printf("not divided");
		}
		return a;
	}
	int main()
	{
	int x=dividede5();
	printf("%d",x);
	}