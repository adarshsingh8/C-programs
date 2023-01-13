#include <stdio.h>
int main ()
{
	int a=1, b=2 ;
	a= a^b ;
	b= b^a ;
	a= a^b ;
	printf ("The values are a=%d, b=%d",a,b);
	return 0;
}
