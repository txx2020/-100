#include <stdio.h>


/*

    ��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

    ����������ؼ��Ǽ����ÿһ���ֵ��

*/

main18()
{
    int a, n, count = 1;
    long int sn = 0, tn = 0;
    printf("please input a and n\n");
    scanf_s("%d,%d", &a, &n);
    printf("a=%d,n=%d\n", a, n);
    while (count <= n)
    {
        tn = tn + a;
        sn = sn + tn;
        a = a * 10;
        ++count;
    }
    printf("a+aa+...=%ld\n", sn);
}