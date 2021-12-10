#include<stdio.h>
int main()
{
	int units; 
	float rate,rs;
	scanf("%d",&units);
	if(units<=50)
	{
		rate=0.5;
		rs=units*0.5;
		printf("%d",rs);
			}
			else if(50<=units<=150)
			{
				rate = 0.75;
				rs=25+(units-50)*0.75;
				
				
			}
			else if (150<units<=250)
			{
				rate=1.20;
				rs =100+(units -150)*1.20;
			
				
			}
			else
			{
			
			rate=1.50;
			rs=220+(units-250)*1.50;
		
		}
		rs=rs+(rs*0.2);
		printf("%f",rs);
		return 0;
}
