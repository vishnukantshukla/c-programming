#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
  printf("enter the tempertaure in celsius=%f\n",celsius);
  printf("%fcelsius=%ffahrenheit",celsius,fahrenheit);
	return 0;
}
