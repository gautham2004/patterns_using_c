#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s,l,n;
    printf("Enter the no of lines:");
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
        for(s=0;s<n-l;s++)
        {
            printf("  ");//2 spaces
        }
        for(j=0;j<l+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


// Without using one inner for loop
/*
int main()
{
     int i,j,l,n;
    printf("Enter the no of lines:");
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
        for(j=0;j<n+1;j++)
        {
           if(j<n-l)
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
