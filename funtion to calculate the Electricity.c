#include<stdio.h>
void ElectricityBill(void)
{
	int customerid,EC,units,Salestax;
	float chargeperunit;
	char ch[25];
	printf("Enter the name of Customer \n");
    gets(ch);
	printf("Enter the customer id\n");
	scanf("%d",&customerid);
	printf("Please enter the units consumed by the users\n");
	scanf("%d",&units);
	if(units>=1&&units<=100)
	{
		chargeperunit=2 ;
	}
	if(units>=101&&units<=200)
	{
		chargeperunit= 3.50;
		
	}
	if(units>=201)
	{
		chargeperunit= 4.50;
		
	}
	EC=units*chargeperunit;
	
	EC= EC+EC*0.10;
	printf("Total electric bill including sales tax\n");
 printf("%d",EC);


}
int main()
{
	ElectricityBill();
	return 0;
}
