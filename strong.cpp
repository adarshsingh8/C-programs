// strong number.
#include <stdio.h>
int main ()
{ int a,b,result=0,fact,i;
scanf("%d",&a);
for (i=a;a>0;a=a/10)
{ fact=1; 
b=a%10;
 for (int j=1;j<=b;j++)
 { fact=fact*j;
 }
 result=result+fact;
}
if (result==i)
printf("strong");
else
printf ("not strong");
return 0;
}
