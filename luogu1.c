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
}
int correct_n,sum=0,weight=0;
for(int i=0;i<lens-1;i++)
{
    
    if(str[i]=='-') continue;
    else
    {  weight++;
       sum+=(str[i]-'0')*weight;
    }
}
correct_n=sum%11;
if(correct_n==10) correct_n='x';
if(str[lens-1]==correct_n)
{
    printf("right\n");
}
else printf("%s\n",str);
return 0;
}
       
