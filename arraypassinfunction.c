#include<stdio.h>
int main()
{


	for(i=0;i<5;i++)
	{
	printf("\t%d",arr[i]);
	}

for(i=0;i<5;i++)
{
if(arr[0]>arr[i])       // <=maximum , >= minimum
{
	arr[0]=arr[i];
}
}
printf("%d\n",arr[0]);
}

int main()
int arr[5],i;
for(i=0;i<5;i++)
{
printf("enter the value");
scanf("%d",&arr[i]);
}