#include <stdio.h>

int main()
{
    int Grade;
    printf("Score: ");
    scanf("%d", &Grade);

    printf("Score: %d  →", Grade);
    if (Grade >= 80)
    {
        printf(" Grade: A (4.0) ");
    }
    else if (Grade >= 75)
    {
        printf(" Grade:B+ (3.5) ");
    }
    else if (Grade >= 70)
    {
        printf(" Grade: B (3.0) ");
    }
    else if (Grade >= 65)
    {
        printf(" Grade: C+ (2.5) ");
    }
    else if (Grade >= 60)
    {
        printf(" Grade:C (2.0) ");
    }
    else if (Grade >= 55)
    {
        printf(" Grade: D+ (1.5) ");
    }
    else if (Grade >= 50)
    {
        printf(" Grade: D (1.0) ");
    }
    else
    {
        printf(" Grade: F (0.0) ");
    }
    if (Grade >= 50)
    {
        printf("— Pass ");
    }
    else
    {
        printf("— Fail ");
    }

    return 0;
}