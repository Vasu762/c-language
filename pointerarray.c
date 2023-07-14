#include<stdio.h>
	int main()
	{
	int a[5]={11,22,33,44,55};
	int i ,*p;
	p=a;
	for(i=0;i<5;i++)
	{
	printf("%d \t %u\n",a[i], &a[i]);
	}
}