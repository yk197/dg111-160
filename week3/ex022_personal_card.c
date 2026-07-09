#include <stdio.h>

int main()
{
    // กำหนดค่าตัวแปร
    char name[50];
    int age;
    float gpa;
    char favorite_subject[50];

    // รับข้อมูลจากผู้ใช้
    printf("=== Enter Data ===:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &gpa);
    printf("Favorite Subject: ");
    scanf("%s", favorite_subject);

    // แสดงข้อมูลที่ผู้ใช้ป้อน
    printf("\n=== Personal Information ===\n");
    printf("┌───────────────────────────────┐\n");
    printf("│ Name            : %-12s│\n", name);
    printf("│ Age             : %d years old│\n", age);
    printf("│ GPA             : %-12.2f│\n", gpa);
    printf("│ Favorite Subject: %-12s│\n", favorite_subject);
    printf("└───────────────────────────────┘\n");

    return 0;
}
