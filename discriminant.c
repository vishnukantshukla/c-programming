#include<stdio.h>
int main()
{
 int sp,cp,profit,amount;
 scanf("%d%d",&sp,&cp);
 if(sp>cp)
 {
 	amount= sp-cp;
	printf("profit=%d",amount);
	
 }
 else if (cp>sp)
 {
 	amount=cp-sp;
 	printf("loss=%d",amount);
 	
 }
 else
 printf("no loss and no profit");
 return 0;
			
}
