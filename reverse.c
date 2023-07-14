#include<stdio.h>
	void main()	
	{
	char str[50];
	
	printf("enter the string:");
	scanf("%s",&str);

	int i=0;
	int len=0;
	
	while(str[i]!='\0')
	{
	i++;
	len++;
	}
	printf("string length%d\n",i);
	
	for(i=0;i<len/2;i++)
	{
	char a;
	a=str[i];
	str[i]=str[len -i -1];
	str[len -i -1]=a;
	}
	printf("revers string::%s\n",str);
	}