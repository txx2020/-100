#include <stdio.h>

/*

    ��Ŀ�����9*9�ھ���

    ����������������п��ǣ���9��9�У�i�����У�j�����С�

*/

main08()
{
    int i, j, result;
    printf("\n");
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            result = i * j;
            printf("%d*%d=%-3d", i, j, result); /*-3d��ʾ����룬ռ3λ*/
        }
        printf("\n");/*ÿһ�к���*/
    }
}