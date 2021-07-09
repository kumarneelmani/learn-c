#include <stdio.h>

int main()
{
    int a[10], b[10], c[10];
    printf("Enter 10 elements\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("even elements in array b is ");
    for (int j = 0; j <= 9; j++)
    {
        if (a[j] % 2 == 0)
        {
            b[j] = a[j];
            printf("%2d", b[j]);
        }
    }
    printf("\n");
    printf("odd elements in array c is ");
    for (int k = 0; k <= 9; k++)
    {
        if (a[k] % 2 == 1)
        {
            c[k] = a[k];
            printf("%2d", c[k]);
        }
    }
    printf("\n");
    return 0;
}