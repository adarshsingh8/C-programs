#include<stdio.h>
int main()
{
	int a=0,b=1,sum=0;
	printf ("Enter any value:");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
{ printf("%d,",a);
 a=b;
 sum=sum+b;
 b=sum;
 sum=a;
}
printf("%d",sum);
return 0;
}
