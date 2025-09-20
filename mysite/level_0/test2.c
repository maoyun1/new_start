#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *file = fopen("C:\\Users\\31567\\Desktop\\new_start\\mysite\\level_0\\data.txt", "r"); 
    if(file==NULL)
    {
        printf("文件打开错误\n");
        return 1;
    }
    char input[100];
    while(1)
    {
    printf("请输入key:(输入Quit退出)\n");
    scanf("%s",input);    
    if(strcmp(input,"Quit")==0)
    {
        printf("好的，程序退出。");
        break;
    }        
     rewind(file);
    char line[100];

       while(fgets(line,sizeof(line),file))
       { 
       char *colon_pos=strchr(line,':');
       if (colon_pos == NULL) 
       {
                continue; 
       }
       *colon_pos='\0';
        char *key=line;
        char *value=colon_pos+1;
        if(strcmp(input,key)==0)
            {
            printf("文件中找到了：%s,且其值为：%s\n",input,value);
            break;
           
            }
           else
           {  
            printf("Error\n");
            }              
        }
        fclose(file);
    }
        return 0;
}
        