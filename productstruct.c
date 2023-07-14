#include<stdio.h>
 	struct product{
	char name[50];
	int rate,qty,amount;
	int no,bill;
	float dis,gst,netbill;

}; 
int main()
{
struct product a[5];
int i;
for(i=0;i<2;i++)
{
printf("enter the no:");
scanf("%d",&a[i].no);
printf("enter the name:");
scanf("%s",&a[i].name);
printf("enter the rate:");
scanf("%d",&a[i].rate);
printf("enter the qty:");
scanf("%d",&a[i].qty);
}

	printf("no\t name\t rate\t qty\t amount\t dis\t billgst\t netbill");
	for(i=0;i<2;i++)
	{
	a[i].amount=a[i].rate * a[i].qty;
	a[i].dis=a[i].amount*0.5;
	
	a[i].bill=a[i].amount-a[i].dis;
	a[i].gst=a[i].bill*0.18;
	a[i].netbill=a[i].amount+a[i].gst;
	
	printf("\n%d\t %s\t %d\t \t%d %d\t %d\t %.2f\t %.2f\t %.2f\t",a[i].no,a[i].name,a[i].rate,a[i].qty,a[i].dis,a[i].gst,a[i].netbill);

	}
}
