#include<stdio.h>
int main()
{
	int i,count=0;
	char ch[100];
	int  value[26]={0};
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		{
		
		count=count+!value[ch[i]-'a'];
		value[ch[i]-'a']=1;
	}
	else if(ch[i]>='A'&&ch[i]<='Z')
	{
		count=count+!value[ch[i]-'A'];
		value[ch[i]-'A']=1;
	}
}
if(count==26)
{
	printf("It is pangram string");
}
else
{
	printf("It is not pengram string");
}
return 0;	
}
