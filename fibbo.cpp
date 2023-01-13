#include<stdio.h>
int main()
{int n ,a=0,b=1,c,i;
printf("enter any no:");
scanf("%d",&n);
for(i=n;i>=1;i--) 
{
printf("%d ",a);
c=a+b;
a=b;
b=c;

}
return 0;
}
