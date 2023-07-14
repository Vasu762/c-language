#include<stdio.h>
	 int m,s,g,e,t;
	 float pr;
	
int setdata()
	{
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
	t=m+s+e+g;
	pr=t/4;
	}
int display()
	{
	printf("mathes\t science\t english\t total\t pr\t\n");
	printf("\t%d   \t%d   \t%d  \t%d  \t%d  \t%f",m,s,e,g,t,pr);
	}
int main()
{
	setdata();
	cal();
	display();
}