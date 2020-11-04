#include <stdio.h>

/*

    题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

    程序分析：利用while语句,条件为输入的字符不为'\n'.

*/

main17()
{
    char c;
    int letters = 0, space = 0, digit = 0, others = 0;          /*************************************************************************************/
    printf("please input some characters\n");                   /*　scanf（）函数是格式输入函数，即按用户指定的格式从键盘上把数据输入到指定的变量中。*/
    while ((c = getchar()) != '\n')                             /*　在scanf（）语句的格式串中由于没有非格式字符在“%d%d%d”之间作为输入时的间隔，    */
    {                                                           /*  因此在输入时要用一个以上的空格或回车符作为每两个输入数之间的间隔。               */
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')       /*  scanf()在读取数字时会跳过空格、制表符和换行符！                                  */
            letters++;                                          /*************************************************************************************/
        else if (c == ' ')
            space++;
        else if (c >= '0' && c <= '9')
            digit++;
        else
            others++;
    }
    printf("all in all:char=%d space=%d digit=%d others=%d\n", letters, space, digit, others);
}