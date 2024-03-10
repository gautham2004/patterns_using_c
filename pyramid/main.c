/* using 4 variables
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s;
    printf("Enter the no of lines you need:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(s=0;s<n-i-1;s++)
        {
            printf("  ");
        }
        for(j=0;j<i*2+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

// with using only 3 variables

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s;
    printf("Enter the no of lines you need:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n+i;j++)
        {
        if(j<n-i-1)
        {
           printf("  ");
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

