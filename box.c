#include <stdio.h>
int main()
{
    int n = 5;
    printf("\n\n");
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0 || i == n || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    printf("\n\n");
    return 0;
}