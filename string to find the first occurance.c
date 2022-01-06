#include<stdio.h>
int main()
{
	int i,k;
	k=0;
	char x[100],a;
	gets(x);
	scanf("%c",&a);
	for(i=0;i<=100;i++)
	{
		if(x[i]==a)
		{
		
		k=k+1;
	  break;
	  
}
	}
	if(k==0)
	{
		printf("it is valid input=%c",a);
		
	}
	else
	{
		printf("%c is present at position= %d",a,i+1);
	}
	return 0;
}
