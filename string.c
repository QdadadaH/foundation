#include<stdio.h>

void main(void)
{
    char string0[8];
    char string1[8];
    printf("请输入字符串0：");//此时字符串只能包含7个字符，因为最后会自动生成一个\0，占一个字符！！
    scanf("%s",string0);
    printf("请输入字符串1：");
    scanf("%s",string1);
    printf("\n您输入的字符串0是：%s\n您输入的字符串1是：%s\n",string0,string1);
}

