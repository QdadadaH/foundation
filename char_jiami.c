#include<stdio.h>

int main()

{

    char ch;

    ch=getchar();//scanf("%c",&ch);

    if(ch>=65&&ch<=87)

    {

        printf("%c",ch+3);

    }

    else if(ch>=88&&ch<=90)

    {

        printf("%c",ch-23);

    }



    return 0;

}
