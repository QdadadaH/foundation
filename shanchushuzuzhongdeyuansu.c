#include<stdio.h>

int main()
{
    int i,n,a[20];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                int k=0;
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n=n-1;
                j-=1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

