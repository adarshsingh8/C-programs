// hollow square
#include<stdio.h>
int main(){
	int n,i,j;
	char c=65;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{if(j==1 || i==1 || j==n || i==n)
		 printf("* ");
		 else
		 {
		 printf("%c ",c);
		 c++;
	     }
	}
		printf("\n");
	}
	

return 0;
}
