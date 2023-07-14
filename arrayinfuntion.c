#include<stdio.h>
	
	int dis(int a[])
	{
		for(int i=0;i<5;i++)
		{
		printf("%d",a[i]);
		}
			for(int i=0;i<5;i++)
			if(a[0]>a[i])
			{
			a[0]=a[i];
			}
				printf("\n%d",a[0]);
	
	}















int main()
{
int i,arr[5];
for(i=0;i<5;i++)
{
printf("enter the value");
scanf("%d",&arr[i]);
}
dis(arr);
}
