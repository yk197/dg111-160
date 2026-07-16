#include <stdio.h>

int main()
{
    // 1.1
    float weight, height, bmi;
    printf("Input your weight (kg): ");
    scanf("%f", &weight);
    printf("Input your height (cm): ");
    scanf("%f", &height);

    // คำนวณค่า BMI
    bmi = weight / ((height / 100) * (height / 100));
    printf("Output BMI : %.2f", bmi);

    // 1.2
    if (bmi < 18.5)
    {
        printf(" →  underweight ✓");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf(" →  normal ✓");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf(" →  overweight ✓");
    }
    else
    {
        printf(" →  obese ✓");
    }

    return 0;
}