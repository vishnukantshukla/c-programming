#include<stdio.h>
void Roots()
{
	int a,b,c,discriminant;
	printf("Enter the value of a\t=");
	scanf("%d",&a);
	printf("Enter the value of b^2\t=");
	scanf("%d",&b);
	printf("Enter the value of c\t=");
	scanf("%d",&c);
	{
	
	discriminant = (b*b) - 4*a*c;
    }
	{
		if(discriminant<0)
		{
			printf("%d is a imaginary number",discriminant);
		}
		else if(discriminant>0)
		{
			printf("%d is a real rooots ",discriminant);
		}
		else
		{
			printf("%d is equal roots",discriminant);
		}
	}
}
int main()
{
	Roots();
	return 0;
}
