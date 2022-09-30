/*设b是a的平方，若a与b的尾部相同，则称a是同构数。例如，25的平方是625，所以25是同构数。
编写程序满足如下要求：
输入两个整数m和n，找出m、n之间全部的同构数（包括m和n本身）。*/
#include<stdio.h>
int main()
{
    int m,n,a,p,q;
    int i,j=0;
    scanf("%d %d",&m,&n);
    p=m<n?m:n;
    q=m>n?m:n;
    //printf("%d %d\n",p,q);
    for(i=p;i<=q;i++)
    {
        a=i*i;
        int c=1;
        while(c<=i)
        {
            c*=10;
        }

        if((a-i)%c==0)
        {
            printf("%d\n",i);
            j++;

        }
    }
    if(j==0)
    {
        printf("No Answer\n");
    }
    return 0;


}
