#include<stdio.h>
	struct product
{
	int no,rate,qty;
	int amount;
	float dis,gst,netbill;
	char name[50];
};
int main()
{
struct product a[5];
int i;

for(i=0;i<5;i++)
{
	printf("enter a no:");
	scanf("%d"a[i].no);
	
	printf("enter a name:");
	scanf("%s"a[i].name);

	printf("enter a rate:");
	scanf("%d"a[i].rate);

	printf("enter a qty:");
	scanf("%d"a[i].qty);
}
