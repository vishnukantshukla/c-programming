#include<stdio.h>
int main()
{
	int i,flag,len,num;
	char x[100];
	gets(x);
    len=strlen(x);
    printf("The length of string is = %d\n",len);
    num=len;
    for(i=0;i<num;i++)
    {
    	if(x[i]!=x[num-i-1])
    	{
    		flag=1;
    		
		}
		break;
	}
	if(flag==1)
	{
		printf("Given string is not pallendrome");
	}
	else
	{
		printf("Given string is pallendrome");
	}




return 0;
}
