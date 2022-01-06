#include<stdio.h>
int main()
{
	int i,count =0;
	char x[100],y[100];
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
	 count = count+1;	
	}
	printf("The number of elements present in array = %d\n",count);
	for(i=0;i<count;i++)
	{
		y[i]=x[i];
	}
	puts(y);
	return 0;
}
