#include<stdio.h>
#include<math.h>
int main()
{
	int base,exponent,power;
	int i;
	scanf("%d%d",&base,&exponent);
	for(i=1;i<=exponent;i++);
	{
		
	power=pow(base,exponent);
}
	printf("%d ^ %d = %d",base,exponent,power);
	return 0;
	}
