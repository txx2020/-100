#include <stdio.h>

/*

    ��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��

    ���������(a>b)?a:b��������������Ļ������ӡ�

*/

main15()
{
    int score;
    char grade;
    printf("please input a score\n");
    scanf_s("%d", &score);
    grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
    printf("%d belongs to %c", score, grade);
}