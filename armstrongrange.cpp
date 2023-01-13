// to check armstrong in given range.
#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c=0,d,result=0,e;
	printf ("Enter starting number:");
	scanf ("%d",&a);
	printf ("enter last term:");
	scanf("%d",&b);
	for (int i=a;i<=b;i++)
	{ i=i/10;
	  ++c;
	  for (int i=a;i!=0;i=i/10)
	  { d=i%10;
	  result= result + pow(d,c);
	  }
	  if (result==i)
	  e=i;
	}
	printf ("%d is armstrong",e);
	return 0;
}
