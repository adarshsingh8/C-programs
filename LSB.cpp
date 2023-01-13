// LSB 
#include <stdio.h>
int main()
{
	int a;
	printf ("Enter any number:");
	scanf("%d",&a);
	if(a&1)
	printf("set");
	else
	printf("unset");
	return 0;
}
