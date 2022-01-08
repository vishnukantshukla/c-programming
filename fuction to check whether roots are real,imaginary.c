#include<stdio.h>
void roots (void)
{
	int a,b,c,Discriminant;
	printf("Enter the value of a =");
	scanf("%d",&a);
	printf("Enter the value of b =");
	scanf("%d",&b);
	printf("Enter the value of c =");
	scanf("%d",&c);
	Discriminant = (b*b)-4*a*c;
	if(Discriminant<0)
	{
		printf("%d is imaginary roots",Discriminant);
		
	}
	else if(Discriminant>0)
	{
		printf("%d is real root ",Discriminant);
		
	}
}
	int main()
	{
		roots();
		return 0;
	}
