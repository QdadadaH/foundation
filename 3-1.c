#include<stdio.h>
int main()
{
    double C,F;
    scanf("%lf",&C);//double的输入类型必须为%lf
    F = (9.0/5.0)*C+32;//C注意/的结果
    printf("%lf",F);//输出类型可以为%f||%lf
    return 0;
}
