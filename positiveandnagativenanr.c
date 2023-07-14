#include<stdio.h>
int positiveandnagative()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	if(a>0)
	{
	printf("a is positive");
	}	
	else
	{
	printf("a is nagative");
	}
	return a;
}
int main()
{
	int x=positiveandnagative();
	printf("a ispositive%d",x);
}