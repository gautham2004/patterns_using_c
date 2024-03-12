#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("Enter the no of lines:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if(-(n-i)<j && j<(n-i))
            {
                printf("  ");//2 spaces
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
