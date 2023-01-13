// pallindrome
#include <stdio.h>
int main ()
{
	int a,b,reversed=0,r;
	printf ("Enter any number:");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{ r=a%10;
	reversed = r+reversed*10 ;
	a=a/10;
	}
	printf ("%d \n",reversed);`
	if(reversed==b)
	printf("pallindrome");
	else
	printf("not pallindrome");
	return 0;
}
