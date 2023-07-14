#include<stdio.h>
	int dis(int a[])
{
	for(int i=0;i<5;i++)
	{
	printf("%d\t",a[i]);
	}

		for(int i=0;i<5;i++)
		{
			if(a[0]>a[i])
			{
			a[0]=a[i];
			}
			
		}
		printf("minimum%d\n",a[0]);
}

int main()
{
int a[5],i;
for(i=0;i<5;i++)
{
printf("enter the value");
scanf("%d",&a[i]);
}
dis(a);
}