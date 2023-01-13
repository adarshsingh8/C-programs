// Write a program to determine whether a number is even or odd without using assignment operator.
#include <stdio.h>
int main ()
{
	int a ;
	printf ("Enter any number:");
	scanf ("%d",&a);
	if ((a&1)==0)
	{
	 printf ("The number is even.");
	}
	else
	{ 
	printf ("The number is odd.");
	}
	return 0;
}
