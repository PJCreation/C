// practice 8.c -- 函数互相调用
#include <stdio.h>

void one(void);
void two(void);
void three(void);
void one_three(void);
void newline(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!");

    return 0;
}

void one(void)
{
    printf("one");
}

void two(void)
{
    printf("two");
}

void three(void)
{
    printf("three");
}

void one_three(void)
{
    one();
    newline();
    two();
    newline();
    three();
    newline();
}

void newline(void)
{
    printf("\n");
}