#include<stdio.h>
int main()
{
int i;
char x[15];
for(i=0;i<15;i++)
{
scanf("%c",&x[i]);
}
for(i=14;x[i]!=0;i--)
{
printf("%c",x[i]);
}
return 0;
}

