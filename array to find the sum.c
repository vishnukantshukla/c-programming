#include<stdio.h>
int main()
{
	int i,a,b,j,sum =0;
	scanf("%d",&a);
	int x[a][a];
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d",&x[i][j]);
		}
}
	for(i=0;i<a;i++)
	{
		for (j=0;j<a;j++)
		sum= sum +x[i][j];      /// for sum 
		printf("%d\n",sum);
		sum =0;
	}
	
	return 0;
}
