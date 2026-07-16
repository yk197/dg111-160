#include <stdio.h>
#include <math.h>
int main()
{
    int Player_Attack, Enemy_Defense, Hit_Number;
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
        printf("Damage: %d\t*** CRITICAL HIT! x1.5 ***", Critical_Damage);
    }
    else
    {
        int damage = Base_Damage;
        printf("Damage: %d \t(Normal)", damage);
    }
    return 0;
}
