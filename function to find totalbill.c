#include<stdio.h>
void bill (void)
{
	float bill,mealcharge,tax,tip,totalbill,bill1,bill2;
	scanf("%f",&bill);
bill-=0.10*bill;
bill+=0.20*bill;
bill+=0.15*bill;
	printf("%f",bill);
	
	
}
int main()
{
	bill();
	
	return 0;
}
