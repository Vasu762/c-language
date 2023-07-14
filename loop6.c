#include<stdio.h>
	void loop()
	{
	int i,t=0;
	for(i=1;i<=5;i++)
	{
	t=t+i;
	printf("%d\n",i);
	}
	printf("total%d",t);
	}
int main()
{
loop();
}