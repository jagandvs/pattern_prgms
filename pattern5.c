#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<i*2;k++)
            {
                printf("*");
            }
            printf("\n");
    }
    return 0;
}
