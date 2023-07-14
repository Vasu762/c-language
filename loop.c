#include<stdio.h>
	void loop()
	{
	int n,i;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	printf("%d",i);
	}
	}
int main()
{
	loop();
}