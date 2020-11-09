#include <stdio.h>

/*

    题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

*/

main()
{
    int i = 5;
    void palin(int n);
    printf("\40:");
    palin(i);
    printf("\n");
}
void palin(n)
int n;
{
    char next;
    if (n <= 1)
    {
        next = getchar();
        printf("\n\0:");
        putchar(next);
    }
    else
    {
        next = getchar();
        palin(n - 1);
        putchar(next);
    }
}