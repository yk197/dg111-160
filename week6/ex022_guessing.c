#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // ข้อ1 ตั้งค่า Seed สำหรับสุ่มตัวเลข
    srand(time(NULL));
    // ข้อ2 สุ่มตัวเลข 1-100
    int target = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    printf("=== Number Guessing Game (1-100) ===\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target)
        {
            printf("Too low!\n");
        }
        else if (guess > target)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Congratulations! You guessed in %d attempts.\n", attempts);
            break;
        }
    } while (guess != target);

    return 0;
}