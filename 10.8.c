//ð������
#include<stdio.h>
#define n 10
int main()
{
    int a[n],i,j,t;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)//ÿ�ִ�ͷ��ʼ���Ƚϣ���n-1�֣���Ϊ���һ��ֻ��һ������������Ƚ�
    {
        for(j=0;j<n-1-i;j++)//ÿ�αȽ�ȷ��һ�����ģ��´��ٱȽ�1��
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

//ѡ������
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

