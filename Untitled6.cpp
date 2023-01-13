// Write a c program to take a string from user and check its pallindrome or not.

#include <stdio.h>
int main()
{
	char s[100], rev[100];
	scanf("%[^\n]s",s);
	int i,l,f=0;
	for(l=0;s[l];l++);
	for(int i=0;s[i];i++)
	rev[i]=s[l-i-1];
	rev[i]='\0';
	printf("\n reverse=%s",rev);
	for(int i=0;s[i];i++)
	if(s[i]!=rev[i])
	{printf("\n not pallindrome");
	f=1;
	break;
	}
	if(f==0)
	{
		printf("pallindrome");
	}
	return 0;
}
