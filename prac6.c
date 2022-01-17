#include<stdio.h>
int main()
{
	int i;
	char x[100];
	int value[26]={0} ,count=0;
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]>='A'&&x[i]<='Z')
		{
			count= count +!value[x[i]-'A'];
			value[x[i]-'A']=1;
		}
		else if(x[i]>='a'&&x[i]<='z')
		{
			count=count+!value[x[i]-'a'];
			value[x[i]-'a']=1;
		}
		
	}
	if(count==26)
	{
		printf("Given string is pangram");
	}
	else
	{
		printf("Given string is not pangram");
	}
	return 0;
}
