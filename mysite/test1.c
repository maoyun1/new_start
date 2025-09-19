#include<stdio.h>
int main()
{
    printf("«Î ‰»Î£∫\n");
    char ch;
    scanf("%c",&ch);
    while(ch!='quit'&&ch!='Quit')
    {
        if(ch=='Dian'||ch=='dian')
        {
            printf("2002\n");
            while(scanf(ch)!='\n');
        }
        else 
        {
            printf("Error\n");
            while(scanf(ch)!='\n');
        }
    }
    return 0;
}

