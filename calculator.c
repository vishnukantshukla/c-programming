#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		case 1:printf("IT IS VOWEL");
		break;
		case 0:printf("IT IS CONSONANT");
		break;
	}
	return 0;
}

