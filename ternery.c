#include<stdio.h>
int main()
{ char x ;
scanf("%c",&x);
(x>='a'&&x<='z'||x>='A'&&x<='Z')?printf("it is a alphabet"):printf("it is a special character");
return 0;
}
