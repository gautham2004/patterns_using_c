#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s,n,l;
    printf("Enter the no of lines:");
    scanf("%d",&n);

    for(i=-n;i<=n;i++)
    {
        if(i<0)
        {
            l=-i;
        }
        else
        {
            l=i;
        }
        for(s=0;s<l;s++)
        {
            printf("  ");//2spaces

        }
        for(j=0;j<(n-l)+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


//Without using a for loop
/*
int main()
{
    int i,j,n,l;
    printf("Enter the no of lines:");
    scanf("%d",&n);

    for(i=-n;i<=n;i++)
    {
        if(i<0)
        {
            l=-i;
        }
        else
        {
            l=i;
        }
        for(j=0;j<=n;j++)
        {
            if(j<l)
            {
                printf("  ");//2spaces
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
*/
