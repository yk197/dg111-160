#include <stdio.h>
int main()
{
    int n, i, is_prime = 1, x;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            x = i;
            break;
                }
    }

    if (is_prime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.(divisible by %d)\n", n, x);
    }

    return 0;
}