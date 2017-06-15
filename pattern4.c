#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,a,b=1;
    printf("Enter the number of rows");
    scanf("%d",&n);
    a=n;

    for(i=0;i<n;i++)
    {
        for(j=1;j<b;j++)
        {
            printf(" ");
        }
        for(k=a;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
       a--;
       b++;
    }
    return 0;
}
