#include<stdio.h>
	void loop8()
	{
	int i,t=0;
	for(i=2;i<=10;i=i+2)
	{
	t=t+i;
	printf("%d",i);
	}
	printf("\n%d total",t);
	}
int main()
	{
	loop8();
	}