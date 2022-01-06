#include<stdio.h>
int main()
{
	int i,alphabet=0,digit=0,specialcharacter=0;
	char ch[15];
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if((ch[i]>='a'&&ch[i]<='z')||(ch>='A'&&ch<='z'))
		{
		  alphabet= alphabet+1;
		}
		else if(ch[i]>='0'&&ch[i]<='9')
		{
			digit = digit+1;
		}
		else
		{
			specialcharacter= specialcharacter+1;
		}
	}
	printf("The number of alphabet is equal = %d\n",alphabet);
	printf("The number of digits = %d\n",digit);
	printf("The number of special character is = %d",specialcharacter);
	return 0;
}
