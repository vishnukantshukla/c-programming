#include<stdio.h>
int main()
{
int x , r, num ,rev=0;
scanf("%d",&x);
num =x;
while(x!=0)
{
 r= x%10;
rev= (rev *10) +r;
 x = x/10;
}
if (num==rev)
printf(" number is pellindrome");
else
printf("it is not a pellindrome number ");
return 0;
}

