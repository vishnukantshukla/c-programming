#include<stdio.h>
int main()
{
char x;
scanf("%c",&x);
(x>='a' && x<='z'  ||  x>='A'  &&  x<='Z')?printf("Character"):printf("Special Character");
return 0;
}
