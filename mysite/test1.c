#include<stdio.h>
#include<string.h>
int main()
{   
    printf("�����룺(����Quit�˳�)\n");   
    char input[100];
    scanf("%s",input);
    while(strcmp(input,"Quit")!=0)
    {
        if(strcmp(input,"Dian")==0)
        {
            printf("2002\n");
        }
        else 
        {
            printf("Error\n");
        }
         printf("�����룺(����Quit�˳�)\n");
         scanf("%s",input);
    }
    return 0;
}

