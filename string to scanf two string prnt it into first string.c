#include<stdio.h>
int main()
{
	int i,j,count=0;
	char x[100];
	char y[100];
	gets(x);
	gets(y);
	for(i=0;x[i]!='\0';i++)
	{
		count = count+1;
		
	}
	printf("THE LENGTH OF THE STRING IS = %d\n",count);
	for(i=count;j=0;y[j]!='\0',i++,j++)
	{
		x[i]=y[j];
	}
	puts(x);
	return 0;
}
