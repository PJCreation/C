//英寸转换为厘米
#include <stdio.h>

int main(void)
{
    float inch = 0;
    printf("Please input inch let for us to convert cm : ");
    scanf("%f",&inch);
    printf("converted cm: %.2f", inch * 2.4);

    return 0;
}