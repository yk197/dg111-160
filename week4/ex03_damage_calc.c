#include <stdio.h>
#include <math.h>
int main()
{
    int Player_Attack, Enemy_Defense, Hit_Number, Enemy_Health = 500;
    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack : ");
    scanf("%d", &Player_Attack);
    printf("Enemy Defense : ");
    scanf("%d", &Enemy_Defense);
    printf("Hit Number : ");
    scanf("%d", &Hit_Number);

    int Base_Damage = Player_Attack - Enemy_Defense;

    if (Hit_Number % 5 == 0)
    {
        int Critical_Damage = (int)ceil((float)Base_Damage * 1.5f);
        printf("Damage: %d\t*** CRITICAL HIT! x1.5 ***\n", Critical_Damage);
        printf("Enemy Health: %d\n", Enemy_Health - Critical_Damage);
    }
    else
    {
        int damage = Base_Damage;
        printf("Damage: %d (Normal)\n", damage);
        printf("Enemy Health: %d\n", Enemy_Health - damage);
    }
    return 0;
}
