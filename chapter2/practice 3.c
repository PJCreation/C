// practice 3.c -- 年龄转换为天数 不考虑闰年
#include <stdio.h>

int main(void)
{
    int age ,day;
    age = 24;
    day = age * 365;
    printf("I am %d year, %d day." ,age ,day);

    return 0;
}