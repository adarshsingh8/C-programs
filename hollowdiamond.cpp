// hollow diamond.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   for(int j=n;j>=i;j--)
        printf(" ");
        for(int j=1;j<=i;j++)
        {
		if(j==1)
        printf ("* ");
        else
        printf(" ");
        if(j==i-1)
        printf ("* ");
        else
        printf(" ");
     }
    printf("\n");
    }
    for(int i=n;i>=1;i--)
    {   for(int j=n;j>=i;j--)
        printf(" ");
        for(int j=1;j<=i;j++)
        {	if(j==1)
        printf ("* ");
        else
        printf(" ");
        if(j==i-1)
        printf ("* ");
        else
        printf(" ");
		}
    
    printf("\n");
    }
    return 0;
}

