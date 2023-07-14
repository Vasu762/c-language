#include<stdio.h>

int dis(int m,int s,int e,int t, float pre)
{

printf("mathes\t science\t english\t total\t pre\n");
printf("%d\t %d\t %d\t %d\t %f",m,s,e,t,pre);
}

int cal(int t, float pre,int s ,int m,int e)
{
t=m+s+e;
pre=t/3;
dis(m,s,e,t,pre);
}


int setdata(int m,int s,int e ,int t,float pre )
{
printf("enter the value mathes:");
scanf("%d",&m);

printf("enter the value science:");
scanf("%d",&s);

printf("enter the value eng:");
scanf("%d",&e);

cal(t,pre,s,m,e);
}


int main()
{
int m,s,e,t;
float pre;
setdata(m,s,e,pre,t);
}