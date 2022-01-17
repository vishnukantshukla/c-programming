#include<stdio.h>
int main()
{ 
    int i,count=0,length;
	int x[100];
	int y[100];
	gets(x);
	gets(y);
	length = strlen(y);
	for(i=0;i<length;i++)
	{
		if(x[i]!=y[i])
		{
			count=count+1;
		}
	}
	printf("The hamming distance is = ");
	printf("%d",count);
	return 0;
}
