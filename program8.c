# include<stdio.h>
int main()
{
     char x;
     printf("ENTER ANY CHARACTER : ");
     scanf("%c", & x);
     if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
     printf(" CHARACTER IS VOWEL");
     else
     printf(" CHARACTER IS CONSTANT");
     return 0;
}
