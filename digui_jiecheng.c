/*#include<stdio.h>//ʹ��whileѭ����δ֪������
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

#include<stdio.h>//ʹ��forѭ��
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

//ʹ�õݹ�
#include<stdio.h>
int Add(int n)//�ݹ麯��
{
    if(n>1)
        return n*Add(n-1);
}

int main()//������
{
    int n,ret;
    scanf("%d",&n);
    ret=Add(n)��
    printf("%d",ret);
    return 0;
}

/*���߿���д�ɣ�

#include<stdio.h>
int Add(int n)
int main()//������
{
    int n,ret;
    scanf("%d",&n);
    ret=Add(n)��
    printf("%d",ret);
    return 0;
}

int Add(int n)//�ݹ麯��
{
    if(n>1)
        return n*Add(n-1);
}
