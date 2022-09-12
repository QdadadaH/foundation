
#include<stdio.h>
int fib(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
//不过这里只能到43

//#include<stdio.h>
//int main()
//{
//    int n,i,num[20];//这里似乎要有限制到20
//    num[1]=1;
//    num[2]=1;
//    for(i=3;i<=20;i++)
//   {
//        num[i]=num[i-1]+num[i-2];
//    }
//    scanf("%d",&n);
//    printf("%d",num[n]);

//    return 0;
//}
