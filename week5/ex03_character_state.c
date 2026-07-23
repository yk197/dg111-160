#include <stdio.h>
#include <stdbool.h>
int main()
{
    int max_hp;
    int damage;
    int temp_poisoned;
    bool is_poisoned;
    int attack_count;

    printf("Max HP (1-999): ");
    scanf("%d", &max_hp);
    printf("Damage (0-999): ");
    scanf("%d", &damage);
    printf("Poisoned (0=No, 1=Yes): ");
    scanf("%d", &temp_poisoned);
    printf("Attack Count (1-99): ");
    scanf("%d", &attack_count);

    is_poisoned = (temp_poisoned == 1) ? true : false;

    int hp = max_hp - damage;
    if (hp < 0)
    {
        hp = 0;
    }
    printf("Max HP: %d\n", max_hp);
    printf("Current HP: %d\n", hp);
    printf("Is Poisoned: %s\n", is_poisoned ? "1" : "0");
    printf("Attack Count: %d\n", attack_count);

    printf("=== Status ===\n");

    if (hp <= 0)
    {
        printf("DEAD\n");
    }
    else if (hp < max_hp * 0.25)
    {
        printf("CRITICAL\n");
    }
    else if (is_poisoned)
    {
        printf("POISONED\n");
    }
    else
    {
        printf("NORMAL\n");

        if (attack_count > 0 && attack_count % 5 == 0)
        {
            printf("Ultimate Ready!\n");
        }
    }

    return 0;
}