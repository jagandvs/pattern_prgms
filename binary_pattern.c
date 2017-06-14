#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count=0;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf("%d",++count%2);
                if(j==i&&i<=5)
                    printf("\n");
            }

        if(i%2==0)
            count=0;
        else
            count=1;
    }
}
