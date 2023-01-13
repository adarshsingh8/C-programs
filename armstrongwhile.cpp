// armstrong using while
#include <stdio.h>
int main()
{
	int a,b,arm=0,c;
	printf ("enter any number:");
	scanf("%d",&a);
	c=a;
	while(a!=0)
	{ b=a%10;
	  arm=(b*b*b)+arm;
	  a=a/10;
	}
	printf ("%d ",arm);
	if (arm==c)
	printf ("armstrong");
	else
	printf ("not armstrong");
	return 0;
}
