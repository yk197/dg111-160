#include <stdio.h>
int main()
// วิธีที่ 1: for loop
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    // ผลรวม 1 ถึง 10
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("ผลรวม: %d\n", sum);

    // วิธีที่ 2: while loop

    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    // ผลรวม 1 ถึง 10
    sum = 0;
    i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("ผลรวม: %d\n", sum);

    // วิธีที่ 3: do-while loop

    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    // ผลรวม 1 ถึง 10
    sum = 0;
    i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("ผลรวม: %d\n", sum);
    return 0;
}