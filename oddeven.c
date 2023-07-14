#include<stdio.h>
	void main()
	{
	int i,a[5],even=0,odd=0;
	for(i=0;i<5;i++)
	{
	printf("enter the value");
	scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
		if(i%2==0)
		{
		even=even+a[i];
		printf("%d",even);
		even++;
		}
			else
			{
			odd=odd+a[i];
			printf("%d",odd);
			odd++;
			}
	for(int j=0;j<5;j++)
	{
	printf("a[%d]:%d\n",j,a[j]);
	}
	}	