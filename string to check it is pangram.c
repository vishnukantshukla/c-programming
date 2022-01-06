#include<stdio.h>
int main()
{
	int i,alphabet =0,value[26]={0};
	char ch[100];
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		{
			alphabet = alphabet+!value[ch[i]-'a'];
			value[ch[i]-'a']=1;
		}
		if(ch[i]>='A'&&ch[i]<='Z')
		{
			alphabet=alphabet+!value[ch[i]-'A'];
			value[ch[i]-'A']=1;
		}
	}
	if(alphabet==26)
	{
		printf("string is pangram");
	}
	else
	{
		printf("String is not pangram");
	}
	return 0;
}
