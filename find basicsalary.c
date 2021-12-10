#include<stdio.h>
int main()
{
	float Grosssalary, basicsalary,hra,da;
	scanf("%f",&basicsalary);
	if(basicsalary<=10000)
	{
	
		hra=basicsalary*0.2;
		da=basicsalary*0.8;
	  Grosssalary=basicsalary+hra+da;
	  printf("%f",Grosssalary);
	}
	else if(basicsalary<=20000)
	{
		hra=basicsalary*0.25;
		da=basicsalary*0.90;
		Grosssalary=basicsalary+hra+da;
		printf("%f",Grosssalary);
	}
	else 
	{
		hra=basicsalary*0.30;
		da=basicsalary*0.95;
		Grosssalary=basicsalary+hra+da;
		printf("%f",Grosssalary);
	}
	return 0;
}
