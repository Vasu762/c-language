#include<stdio.h>
void smallest()
{
	int a,b;
	printf("enter the value A");
	scanf("%d",&a);

	printf("enter the value B");
	scanf("%d",&b);	
	if(a<b)
	{
	printf("a is samllest");
	}
	else
	{
	printf("b is smallest");
	}
}
int main()
{
	smallest();
}
	