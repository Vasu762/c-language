#include<stdio.h>
	int main()
	{
	int a=100, *p, **q;
	p=&a;
	q=&p;
	printf("value of a:%d",a);
	printf("\n address of a is%u",&a);

	printf("\nvalue of a using p is:%d",p);
	printf("\n address of p is%u",&p);
	
	printf("\n value of a using p is :%d",*p);
	printf("\n value of a using q is :%d",**q);
	
}