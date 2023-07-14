#include<stdio.h>
	void main()
	{
	int n;
	printf("enter the number");
	scanf("%d",&n);

	int a[10]={2000,500,200,100,50,20,10,5,2,1};
	
	for(int i=0;i<10;i++)
	{
	if(n>=a[i])
	{
	int count =n/a[i];
	
	printf("%d : %d",a[i],count);
	n=n-count * a[i];
	}
}

}