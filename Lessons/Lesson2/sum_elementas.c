#include <stdio.h>

float sum_elements(float a[], unsigned length)
{
    float result = 0;
    // 有符号和无符号计算的时候。会把有符号数转为无符号数。 而 length = 0 时候 =》 0 - 1 会 得出 UMax，导致条件成立
    for (int i = 0; i <= length - 1; i++)
    {
        result += a[i];
    }
    return result;
}

int main()
{
    float f[2];
    f[0] = 2.0f;
    f[1] = 21.0f;
    float r = sum_elements(f, 0);
    printf(" r = %f ", r);
}