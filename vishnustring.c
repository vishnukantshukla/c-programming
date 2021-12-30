#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
char x[n];
for(i=0;i<n;i++)
{
scanf("%c",&x[i]);
}
for(i=0;x[i]!='\0';i++)
{
printf("%c",x[i]);
}
return 0;
}
