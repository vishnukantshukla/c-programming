#include<stdio.h>
int main()
{
	int i,count =0,num,flag;
	char x[100],y[100];
	gets(x);
	
	for(i=0;x[i]!='\0';i++)
	{
		count = count+1;
	}
	printf("The length of string is = %d\n",count);
	num= count;
	for(i=0;i<=num/2;i++)
	
	{
	 if(x[i]==x[num-i-1])

	{
		flag =1;
	}
}
if(flag==1)
{
	printf("given string is  is pallendrome");
}
else
{
	printf("given string  is not pallendrome");
}
	
	return 0;
}
