//IBSNºÅÂë
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    if(fgets(str,sizeof(str),stdin)==NULL)
    {
        return 1;
    }
    int lens=strlen(str);
    if(str[lens-1]=='\n')
    {
        str[lens-1]='\0';
        lens--; 
    }
    int sum=0,weight=0;
    for(int i=0;i<lens-1;i++)
    {
        if(str[i]=='-') continue;
        else
        {  
            weight++;
            sum+=(str[i]-'0')*weight;
        }
    }
    int remainder=sum%11;
    char correct_char; 
    
    if(remainder==10) 
        correct_char='X'; 
    else 
        correct_char=remainder+'0'; 
    char input_char=str[lens-1];
    if(input_char==correct_char)
    {
        printf("Right\n");
    }
    else 
    {
        str[lens-1]=correct_char;
        printf("%s\n",str);
    }
    return 0;
}