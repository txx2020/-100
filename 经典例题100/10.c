#include <stdio.h>

/*

    题目：打印楼梯，同时在楼梯上方打印两个笑脸。

    程序分析：用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数

*/

main10()
{
    int i, j;
    printf("\1\1\n");/*输出两个笑脸*/
    for (i = 1; i < 11; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%c%c", 219, 219);
        printf("\n");
    }
}