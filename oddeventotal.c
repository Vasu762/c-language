#include<stdio.h>
	void main()
	{
	int i,a[5],sum=0,sum1=0;
	for(i=0;i<5;i++)
	{
	printf("enter the value");
	scanf("%d",&a[i]);
	}
		for(i=1;i<5;i++)
		{
		if(a[i]%2==0)
		{
		sum=sum+a[i];
		}
			else
			{
			sum1=sum1+a[i];	
			}
		}
printf("even%d\n",sum);
printf("odd%d",sum1);
printf("total%d",sum+sum1);
}