#include <stdio.h>

int main()
{
    int n , val;
    printf("Enter n : ");
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j <= i ; j++)
        {
            printf("%d ", (i+1) + (n-j));
        }
        printf("\n");
    }
}