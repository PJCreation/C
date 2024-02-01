// practice 7.c -- 自定义函数输出smile
#include <stdio.h>

void sml(void);

int main(void)
{
    sml();
    sml();
    sml();
    printf("\n");
    sml();
    sml();
    printf("\n");
    sml();
    
    return 0;
}

void sml(void)
{
    printf("Smile!");
}