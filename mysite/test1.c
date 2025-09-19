#include<stdio.h>
#include<string.h>
int main()
{   
    printf("请输入：(输入Quit退出)\n");   
    char input[100];
    scanf("%s",input);
    while(strcmp(input,"Quit")!=0&&strcmp(input,"quit")!=0)
    {
        if(strcmp(input,"Dian"))
        {
            printf("2002\n");
            while(getchar()!='\n');
        }
        else 
        {
            printf("Error\n");
            while(getchar()!='\n');
        }
         printf("请输入：(输入Quit退出)\n");
    }
    return 0;
}

