#include <stdio.h>

/*

    题目：输入两个正整数m和n，求其最大公约数和最小公倍数。

    程序分析：利用辗除法。

*/

main16()
{
    int a, b, num1, num2, temp;
    printf("please input two numbers:\n");
    scanf_s("%d,%d", &num1, &num2);
    if (num1<num2)
    { 
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    a = num1; b = num2;
    while (b != 0)/*利用辗除法，直到b为0为止*/
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("gongyueshu:%d\n", a);
    printf("gongbeishu:%d\n", num1 * num2 / a);
}