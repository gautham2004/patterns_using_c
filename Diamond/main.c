#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s,n,l;
    printf("Enter the no of lines needed:");
    scanf("%d",&n);

    for(i=(-n);i<=n;i++)
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
            printf("  ");//2 spaces
        }
        for(j=0;j<2*(n-l)+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
// Without one innner for loop
int main()
{
    int i,j,n,l;
    printf("Enter the no of lines needed:");
    scanf("%d",&n);

    for(i=(-n);i<=n;i++)
    {
        if(i<0)
        {
            l=-i;
        }
        else
        {
            l=i;
        }
        for(j=0;j<(2*n-l+1);j++)
        {
            if(j<l)
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
*/
