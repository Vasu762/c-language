#include<stdio.h>
	int main()
	{
	int a[3][3],i,j,sum0=0,sum1=0,sum2=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enter  a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
			sum0=sum0+a[i][j];
			}
				else if(i>j)
				{
				sum1=sum1+a[i][j];
				}
					else if(i>j)
					{
					sum2=sum2+a[i][j];
					}
		}
		printf("\n");
	}
	printf("sum of diogonal%d\n",sum0);
	printf("sum of lower%d\n",sum1);
	printf("sum of upper%d\n",sum2);
}
			