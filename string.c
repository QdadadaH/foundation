#include<stdio.h>

void main(void)
{
    char string0[8];
    char string1[8];
    printf("�������ַ���0��");//��ʱ�ַ���ֻ�ܰ���7���ַ�����Ϊ�����Զ�����һ��\0��ռһ���ַ�����
    scanf("%s",string0);
    printf("�������ַ���1��");
    scanf("%s",string1);
    printf("\n��������ַ���0�ǣ�%s\n��������ַ���1�ǣ�%s\n",string0,string1);
}

