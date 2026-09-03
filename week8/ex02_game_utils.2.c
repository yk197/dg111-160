// 2.2 lerp — Linear interpolation
#include <stdio.h>

float lerp(float a, float b, float t);

int main(void)
{
    float t = 0.5f;
    float pos = lerp(0, 100, t);
    printf("t ใน main = %.2f\n", t);
    printf("pos = %.2f\n", pos);
    return 0;
}
float lerp(float a, float b, float t)
{
    float result = a + (b - a) * t;
    return result;
}

// การคำนวณ:
// result = a + (b - a) * t
// (t คือสัดส่วนระหว่าง a กับ b โดย t=0.0 คือจุด a, t=1.0 คือจุด b)
//
// ตัวอย่าง:
// lerp(0, 100, 0.5) → 50.0 ( 0 + (100-0) * 0.5 = 50.0 → กึ่งกลางพอดี )
// lerp(0, 100, 0.0) → 0.0 ( 0 + (100-0) * 0.0 = 0.0 → อยู่ที่จุด a )
// lerp(0, 100, 1.0) → 100.0 ( 0 + (100-0) * 1.0 = 100.0 → อยู่ที่จุด b )