#include<stdio.h>
int main()
{
int n,i,count=0; 
scanf("%d",&n);
char x[n];
gets(x);
for(i=0;x[i]!='\0';i++)
{
count++;
}
printf("The length of the words = %d\n",count);
for(i=count;i>=0;i--)
{
printf("%c",x[i]);
}
return 0;
}
