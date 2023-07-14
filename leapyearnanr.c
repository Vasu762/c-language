#include<stdio.h>
	void leapyear()
	{
	int year;
	printf("enter the yaer");
	scanf("%d",&year);
	if(year%4==0)
	{
	printf("it is leap year");
	}
		else
		{
		printf("it is not yare");
		}
	}
int main()
{
	leapyear();
}