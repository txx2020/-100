#include <stdio.h>

/*

    ��Ŀ���������ͼ��������c���������У���һ����Very Beautiful!

    ����������ַ�����256������ͬ�ַ���ͼ�β�һ��������

*/

main07()
{
    unsigned char a = 32, b = 111;
    printf("%c%c%c%c%c\n", b, a, a, a, b);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", a, a, b, a, a);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", b, a, a, a, b);
}