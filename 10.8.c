//冒泡排序
#include<stdio.h>
#define n 10
int main()
{
    int a[n],i,j,t;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)//每轮从头开始向后比较，共n-1轮，因为最后一轮只有一个数，故无需比较
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

//选择排序
#include<stdio.h>
#define n 5
int main()
{
    int a[n],i,j,t,imax;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {


        for(j=i+1;j<n;j++)
            if(a[j]>a[i])
            {

                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}

