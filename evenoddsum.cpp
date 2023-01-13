//to find sum of even and odd in given range.
#include <stdio.h>
int main ()
{
	int a,b,sume=0,sumo=0;
	printf ("Enter starting number:");
	scanf ("%d",&a);
	printf ("enter last term:");
	scanf("%d",&b);
	for (int i=a;i<=b;i++)
	{ if((i%2)==0)
	    sume=sume+i;
	  else
	    sumo=sumo+i;
	}
	printf ("sum of odd numbers is %d \n sum of even number is %d",sumo,sume);
	return 0;
}
