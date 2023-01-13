#include <stdio.h>
int main()
{
	int a,b;
	printf ("Enter any number:");
	scanf ("%d",&a);
	b=a<<6;
	b=b-a;
	printf ("The answer is b=%d",b);
	return 0;
}
