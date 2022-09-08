#include<stdio.h>
int main(void)
{
    char ch;
    do{
        scanf("%c",&ch);
        if(ch>='A'&&ch<='Z')//if(ch>=65&&ch<=90)
            ch = ch+'a'-'A';
        else if(ch>='a'&&ch<='z')//else if(ch>=97&&ch<=122)
            ch = ch-'a'+'A';
        else if(ch=='\n')
            break;
        printf("%c",ch);
    }while(1);
    return 0;
}
