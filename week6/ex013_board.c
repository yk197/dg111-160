#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 1; j <= 1; j++)
        {
            printf("+---+---+---+---+---+");
        }
        printf("\n");
        printf("|");
        for (j = 1; j <= 5; j++)
        {
            printf("%2d |", i * 5 + j);
        }
        printf("\n");
    }
    printf("+---+---+---+---+---+");
    return 0;
}