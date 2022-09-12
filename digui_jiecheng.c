/*#include<stdio.h>//使用while循环（未知次数）
int main()
{
    int n;
    scanf("%d",&n);
    int sum=1;
    int i=1;
    while(i<=n)
    {
        sum*=i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}

#include<stdio.h>//使用for循环
int main()
{
    int n;
    scanf("%d",&n);
    int sum=1;
    int i;
    for(i=1;i<=n;i++)
    {
        sum*=i;
    }
    printf("%d\n",sum);
    return 0;
}*/

//使用递归
#include<stdio.h>
int Add(int n)//递归函数
{
    if(n>1)
        return n*Add(n-1);
}

int main()//主函数
{
    int n,ret;
    scanf("%d",&n);
    ret=Add(n)；
    printf("%d",ret);
    return 0;
}

/*或者可以写成：

#include<stdio.h>
int Add(int n)
int main()//主函数
{
    int n,ret;
    scanf("%d",&n);
    ret=Add(n)；
    printf("%d",ret);
    return 0;
}

int Add(int n)//递归函数
{
    if(n>1)
        return n*Add(n-1);
}
