#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h> // 需要包含这个头文件以使用 getcwd
int main()
{   

    
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("当前工作目录: %s\n", cwd);
    } else {
        perror("getcwd() error");
        return 1;
    }




    printf("请输入key:(输入Quit退出)\n");
    char input[100];
    scanf("%s",input);
    while(strcmp(input,"Quit")!=0)
    {
    FILE *file=fopen("data.txt","r");
    if(file==NULL)
    {
        printf("文件打开错误\n");
        return 1;
    }
    char line[100];
    fgets(line,sizeof(line),file);
    char *colon_pos=strchr(line,':');
    if(*colon_pos!=0)
    {
        *colon_pos='\0';
        char *key=line;
        char *value=colon_pos+1;
        if(strcmp(input,key)==0)
        {
            printf("文件中找到了：%s\n",input);
            return *value;
        }
    }
    else
    {
        printf("Error\n");
    }
    }
    return 0;
}
