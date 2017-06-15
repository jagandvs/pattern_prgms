#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,k,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i++)
    {
        for(j=a-1;j>0;j--)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
        a--;
    }
    return 0;
}
