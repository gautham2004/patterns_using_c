#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the no of lines you need:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;
}
