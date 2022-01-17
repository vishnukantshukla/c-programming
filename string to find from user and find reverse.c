#include<stdio.h>
int main()
{
	int i,count =0;
	char  ch[100];
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		count = count+1;
		
	}
	printf("The length of the words is = %d\n",count);
	for(i=count;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	return 0;
}
