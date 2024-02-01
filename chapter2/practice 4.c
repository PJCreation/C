// practice 4.c -- 打印指定输出 并且自定义函数
#include <stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");

}

void deny(void)
{
    printf("Which nobody can deny!\n");

}