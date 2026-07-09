#include <stdio.h>

int main()
{
    // กำหนดค่าตัวแปร
    char name[50];
    int max_HP;
    int attack_Power;
    int defense;
    int level;

    // รับข้อมูลจากผู้ใช้
    printf("=== Create Character ===:\n");
    printf("Character Name: ");
    scanf("%s", name);
    printf("Max HP: ");
    scanf("%d", &max_HP);
    printf("Attack Power: ");
    scanf("%d", &attack_Power);
    printf("Defense: ");
    scanf("%d", &defense);
    printf("Level: ");
    scanf("%d", &level);

    // แสดงข้อมูลที่ผู้ใช้ป้อน
    printf("\n=== Character Summary ===\n");
    printf("Name        : %s\n", name);
    printf("Max HP      : %d\n", max_HP);
    printf("Attack Power: %d\n", attack_Power);
    printf("Defense     : %d\n", defense);
    printf("Level       : %d\n", level);

    return 0;
}
