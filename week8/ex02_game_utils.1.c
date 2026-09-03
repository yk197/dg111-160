// 2.1 clamp — จำกัดค่าระหว่าง min และ max
#include <stdio.h>

int clamp(int value, int min, int max);

int main(void)
{
    int hp = 150;
    int safeHP = clamp(hp, 0, 100);
    printf("hp เดิม = %d\n", hp);
    printf("safeHP = %d\n", safeHP);
    return 0;
}
int clamp(int value, int min, int max)
{
    if (value > max)
        value = max;
    if (value < min)
        value = min;
    return value;
}

// การคานวณ:
// - ถ้า value > max → คืนค่า max
// - ถ้า value < min → คืนค่า min
// - นอกเหนือจากนั้น → คืนค่า value เดิม (ไม่ต้องปรับ)
//
// ตัวอย่าง:
// clamp(150, 0, 100) → 100 (150 เกิน max=100 จึงถูกตัดเหลือ 100)
// clamp(-5, 0, 100) → 0 (-5 ต ่ากว่า min=0 จึงถูกดันขึ้นเป็น 0)
// clamp(50, 0, 100) → 50 (50 อยู่ในช่วง [0, 100] แล้ว จึงคืนค่าเดิม)