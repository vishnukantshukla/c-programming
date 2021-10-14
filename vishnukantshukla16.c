#include <stdio.h>
#include<math.h>
int main()
{
int x,y,result;
scanf("%d%d",&x,&y); // we use -lm to run the program in compiler
result=pow(x,y);
printf("%d",result);
return 0;
}
