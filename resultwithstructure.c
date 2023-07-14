#include<stdio.h>
	struct result{
int rollno;
char name[50];
int m,s,e,t;
float pr;
};
int main()
{
	struct result a[5];
	int i;
	for(i=0;i<2;i++)
	{
	printf("enter the rollno:");
	scanf("%d",&a[i].rollno);
	printf("enter the name:");
	scanf("%s",&a[i].name);
	printf("enter the mathes:");
	scanf("%d",&a[i].m);
	printf("enter the science:");
	scanf("%d",&a[i].s);
	printf("enter the english:");
	scanf("%d",&a[i].e);
	}
		printf("rollno\t name\t mathas\t sciencr\t enlish\t total\t pr"); 
		for(i=0;i<2;i++)
		{
		a[i].t=a[i].m+a[i].s+a[i].e;
		a[i].pr=(float)a[i].t/3;
		printf("\n%d\t %s\t %d\t %d\t %d\t  %d\t  %.2f",a[i].rollno,a[i].name,a[i].m,a[i].s,a[i].e,a[i].t,a[i].pr);
		}
}