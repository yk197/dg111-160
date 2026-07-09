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
    int Power_Score = attack_Power * 2 + defense + max_HP / 10;
    // แสดงข้อมูลที่ผู้ใช้ป้อน
    printf("\n=== Character Summary ===\n");
    printf("╔══════════════════════════════╗\n");
    printf("║ %-5s                        ║\n", name);
    printf("╠══════════════════════════════╣\n");
    printf("║ Level      : %-5d           ║\n", level);
    printf("║ HP         : %-5d           ║\n", max_HP);
    printf("║ ATK     : %-5d              ║\n", attack_Power);
    printf("║ DEF      : %-5d             ║\n", defense);
    printf("╠══════════════════════════════╣\n");
    printf("║HP Bar :  [██████████] 100%   ║\n");
    printf("║Power Score : %-5d             ║\n", Power_Score);
    printf("╚══════════════════════════════╝\n");

    return 0;
}