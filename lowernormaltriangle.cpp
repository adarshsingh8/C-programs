// lower normal triangle
#include <stdio.h>
int main()
{
	int a;
	printf ("Enter any value:");
	scanf ("%d",&a);
	for (int i=a;i>=1;i--)
	{ for (int j=a;j>i;j--)
	 { 
	 printf (" ");
	 }
	 for (int j=1;j<=i;j++)
	 { 
	 printf ("* ");
	 }
	 printf ("\n");
	}
	return 0;
}

	
