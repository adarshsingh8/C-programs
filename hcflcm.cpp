// Hcf and Lcm
#include <stdio.h>
int main ()
{ int a,b,hcf,lcm,c=1,d=1;
 printf ("Enter first number:");
 scanf ("%d",&a);
 printf ("Enter second number:",&b);
 scanf("%d",&b);
 for(int i=1;i<=a;i++)
 { if ((a%i==0)&&(b%i==0))
     c=i;
	hcf=c;
 }
 lcm=(a*b)/hcf ;
 printf ("HCF of number is %d \n Lcm of number is %d",hcf,lcm);
 return 0;
}
