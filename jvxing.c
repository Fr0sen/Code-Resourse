#include <stdio.h>
#include <stdlib.h>


int main()             //¾ØÐÎÎÊÌâ
{
    int  h;
    scanf("%d",&h);
    int length = h+2*(h-1);
    for(int i = h-1;i>=0;i--){
        for(int j = 1 ;j<=(h+(i-1)*2 )-2;j++)
        {
            printf(" ");
        }
        for(int j = 1 ;j<=length - (h+(i-2)*2);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
