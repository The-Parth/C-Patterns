#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j <= i*2 ; j++)
        {
            if (j<=i)
            {
                printf("%d ",j+1);
            }
            else 
            {
                printf("%d ", i*2-j+1);
            }
        }
        printf("\n");
    }
    return 0;
}