#include <stdio.h>

int main()
{
    int item_number;
    int Gold = 1000;
    float price, remaining_gold;

    printf("=== Item SHOP ===\n");
    printf("Gold: 1000\n");

    // list items
    printf("1. Health Potion - 50  Gold  (+50 HP)\n");
    printf("2. Mana Potion   - 80  Gold  (+30 MP)\n");
    printf("3. Iron Sword    - 500 Gold  (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold  (+15 DEF)\n");
    printf("5. Exit\n");

    printf("Select item: ");
    scanf("%d", &item_number);

    printf("=== Purchase ===\n");

    switch (item_number)
    {
    case 1:
        price = 50;
        printf("Health Potion : 50 Gold\n");

        break;
    case 2:
        price = 80;
        printf("Mana Potion: 80 Gold\n");

        break;
    case 3:
        price = 500;
        printf("Iron Sword : 500 Gold\n");

        break;
    case 4:
        price = 300;
        printf("Leather Armor: 300 Gold\n");

        break;
    case 5:
        printf("Exit\n");
        return 0;
    default:
        printf("Invalid item number!\n");
        return 1;
    }

    remaining_gold = Gold - price;
    printf("Remaining: %.0f\n", remaining_gold);

    if (item_number == 1)
    {
        printf("Bonus: +50 HP\n");
    }
    else if (item_number == 2)
    {
        printf("Bonus: +30 MP\n");
    }
    else if (item_number == 3)
    {
        printf("Bonus: +20 ATK\n");
    }
    else if (item_number == 4)
    {
        printf("Bonus: +15 DEF\n");
    }
    printf("\n");
    printf("Item purchased successfully! ✓\n");
    return 0;
}
