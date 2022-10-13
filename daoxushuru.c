#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[81],i,j;
    printf("Enter a string:");
    gets(s);

    for(i=0;i<strlen(s);i++)
    {
        printf("%d:",i+1);

        for(j=0;j<i;j++)
        {
            printf(" ");
        }

        for(j=strlen(s)-1;j>=i;j--)
        {
            printf("%c",s[j]);
        }

        printf("\n");
    }
    return 0;

}

























//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//int i,j;
//char ch[100];
//gets(ch);
//for(i=0;i< strlen(ch);i++)
//    {
//    printf("%d:",i+1);
//    for(j=0;j< i;j++){
//        printf(" ");
//    }
//    for(j=strlen(ch);j>= i;j--)
//    {
//        printf("%c",ch[j]);
//    }
//printf("\n");
//}
//return 0;
//
