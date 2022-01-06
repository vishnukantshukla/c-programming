#include<stdio.h>
int main()
{
	int i;
	char x[100],rev,num,rem;
	gets(x);
	num=x;
	for(i=0;x[i]!='\0';i++)
	
		{
		rem=x[i]%10;
		rev= rev*10+rem;
		x[i]=x[i]/10;
	}
	if(rev==num)
	{
		printf("The given string is palindrome");
		
	}
	else
	{
		printf("The given string is not palindrome");
	}
	return 0;
}
