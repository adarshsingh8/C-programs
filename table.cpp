// table of any number
#include <stdio.h>
int main()
{
	int a,b=1,c;
	printf ("Ener the number :");
	scanf ("%d",&a);
	for (int i=1;i<=10;i++)
	{ c=a*i;
	 printf("%d*%d = %d",a,i,c);
	 printf("\n");
	}
	return 0;
}
