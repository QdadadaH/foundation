/*��b��a��ƽ������a��b��β����ͬ�����a��ͬ���������磬25��ƽ����625������25��ͬ������
��д������������Ҫ��
������������m��n���ҳ�m��n֮��ȫ����ͬ����������m��n������*/
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
