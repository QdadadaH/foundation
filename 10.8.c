#include<stdio.h>
#define n 10
int main()
{
    int a[n],i,j,t;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)//每次比较确定一个最大的，下次少比较1个
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
