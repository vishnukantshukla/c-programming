#include<stdio.h>
int main()
{
	int i;
	char x[100];
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]>='A'&&x[i]<='Z')
		
		{
			x[i]= x[i]+32;
		}
		 else if(x[i]>='a'&&x[i]<='z')
		{
			x[i]=x[i]-32;
		}
	}
	puts(x);
	
}
