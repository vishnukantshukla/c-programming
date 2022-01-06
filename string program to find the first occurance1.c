#include<stdio.h>
int main()
{
	int i,k=0,n;
	char x[15],ch;
	gets(x);
	scanf("%c",&ch);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]==ch)
		{
			k=i;
			break;
		}
	}
	
		printf("%c is present at position=%d",ch,k+1);
		
	
	return 0;
}
