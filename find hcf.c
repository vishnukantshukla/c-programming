#include<stdio.h>
int main()
{
	int i,x,y,min,hcf;
	scanf("%d%d",&x,&y);
	min=x<y?x:y;
	for(i=1;i<=min; i++)
	{
	if(x%i==0 && y%i==0)
	{
		hcf=i;
	}
}
	printf("%d",hcf);
	
	return 0;
}
