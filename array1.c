#include<stdio.h>
	void main()
	{
	int a[5],i,b[i],sum;
		for(i=0;i<5;i++)
		{
		printf("enter the value A:");
		scanf("%d",&a[i]);
		}

			for(i=0;i<5;i++)
			{
			printf("enter the value B:");
			scanf("%d",&b[i]);
			}



				for(int  j=0;j<5;j++)
				{
				printf("a[%d]:%d\t",j,a[j]);
				printf("b[%d]:%d\t",j,b[j]);
				sum=a[i]+b[i];
				printf("a[%d] + b[%d] %d",i,i,sum);
				}
	}