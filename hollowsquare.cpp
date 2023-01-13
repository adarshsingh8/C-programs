// hollow square
#include <stdio.h>
int main()
{
	int a;
	printf ("enter any value:");
	scanf ("%d",&a);
	char c=65;
	for(int i=a;i>=1;i--)
	{ for (int j=a;j>=1;j--)
	{ if (i==1 || i==a || j==1 || j==a)
	   printf ("* ");
	   else
	   printf ("%c ",c++);
	}
	printf("\n");
	}
	return 0;
}
