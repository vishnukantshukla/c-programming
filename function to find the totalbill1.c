#include<stdio.h>
void bill(void)
{
	float bill,bill1,bill2,bill3,bill4,bill5,totalbill;
	scanf("%f",&bill);
	bill1=bill*0.10;
	bill2=bill-bill1;
	bill3=bill2*0.20;
	bill4=bill2+bill3;
	bill5=bill4*0.15;
	totalbill=bill4+bill5;
	printf("The total bill = %f",totalbill);
}
int main()
{
	bill();
	return 0;
}
