#include<stdio.h>
	void even()
	{
	int i,n,k=2;
	printf("enter the value");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	
	printf("%d",k);
	k=k+2;
	}
	}
int main()
	{	
	even();
	}