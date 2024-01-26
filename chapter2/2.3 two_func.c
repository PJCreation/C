/* two_func.c -- 一个文件中包含两个函数 */
#include <stdio.h>

void butler(void); // ANSI/ISO C函数原型
                    // 第一个void是没有返回值，(void)是说不带参数

int main(void) // int返回值是int，所以最好带上return 0;
{
    printf("I will summon the butler function.\n");
    butler();   // 执行butler函数，无参数
    printf("Yes.Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void)
{
    printf("You rang,sir?\n");
}