#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
switch(c=='a' || c=='e'|| c=='i' || c=='o' ||c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
{
case 1 : printf("it is vowel");
break;
case 0 : printf("it is constant");
break ;
}
return 0;
}
