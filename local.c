#include<stdio.h>

	
int setdata()
	{
	int m,s,e,g;
	printf("enter the value mathes");
	scanf("%d",&m);
	printf("enter the value science");
	scanf("%d",&s);
	printf("enter the value english");
	scanf("%d",&e);
	printf("enter the value gujarati");
	scanf("%d",&g);
	}
int cal()
	{
	int m,s,e,g,t;
	float pr;
	t=m+s+e+g;
	pr=t/4;
	}
int display()
	{
	int m,s,e,g,t;
	float pr;
	printf("mathes\t science\t english\t total\t pr\t\n");
	printf("\t%d   \t%d   \t%d  \t%d  \t%d  \t%f",m,s,e,g,t,pr);  
	}
int main()
{
	setdata();
	cal();
	display();
}