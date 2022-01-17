#include<stdio.h>
void pallindrome(void)
{
	int x,rev=0,rem,num;
	scanf("%d",&x);
	num=x;
	while(x>0)
	{
	
	rem=x%10;
	rev = (rev*10)+rem;
	x=x/10;
}
		if(rev==num)
		{
			printf("Given Number is pallindrome");
		}
		else
		{
			printf("Given Numbers is not pallindrome number");
		}
	}

int main()
{
	pallindrome();
	return 0;
}
