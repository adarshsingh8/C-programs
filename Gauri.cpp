// sum of even numbers in a range
#include <stdio.h>
int main()
{
	int a,b ;
	printf ("Enter starting value:");
	scanf ("%d",&a);
	printf("Enter ending value:");
	scanf("%d",&b);
	int sum=0;
	for (int n=a;n<=b;n++)
	{ int c=0;
	  for (int i=1;i<=n;i++)
	  { if ((n%i)==0)
	    c++;
	}
	if (c==2)
	sum = sum+n;
	}
	printf ("sum is %d",sum);
	return 0;
}
