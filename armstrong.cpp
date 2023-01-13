// armstrong
#include <stdio.h>
#include <math.h>
int main ()
{
	int a ,b,r,i=0;
	float result=0.0;
	scanf ("%d",&a);
	b=a;
	for (b=a; b!=0;++i)
	{ b=b/10;
	}
	for (b=a;b!=0;b=b/10)
	{ 
	r=b%10;
	result=(result+ pow(r,i));
	}
	if((int) result==a)
	printf("armstorng");
	else
	printf("not armstrong");
	return 0;
}
