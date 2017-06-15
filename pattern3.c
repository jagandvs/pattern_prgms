#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enetr the number of rows");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
