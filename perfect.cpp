// perfect number
#include <stdio.h>
int main ()
{
	int a,c=0;
	printf("Enter any number:");
	scanf("%d",&a);
	for (int i=1;i<=a/2;i++)
	{ if ((a%i)==0)
	c=c+i;
	}
	if (c==a)
	printf("perfect number");
	else
	printf ("not perfect number");
	return 0;
}
