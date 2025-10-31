//用高精度计算出 S=1!+2!+3!+?+n!（n≤50）。
//其中 ! 表示阶乘，定义为 n!=n×(n?1)×(n?2)×?×1。例如，5!=5×4×3×2×1=120。
#include<stdio.h>
#define MAX 200
int main()
{
    int n,temp=0;
    int S[MAX]={0};
    int factor[MAX]={0};
    factor[0]=1;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
       int carry=0;
       for(int j=0;j<MAX;j++)
       {
         temp=factor[j]*i+carry;
         factor[j]=temp%10;
         carry=temp/10;
       }
       int temp_2=0,carry_2=0;
       for(int j=0;j<MAX;j++)
       {
         temp_2=S[j]+factor[j]+carry_2;
         S[j]=temp_2%10;
         carry_2=temp_2/10;
       }
    }
    int start_index=MAX-1;
    while(S[start_index]==0)
    { start_index--;}
    for(int i=start_index;i>=0;i--)
        {
            printf("%d",S[i]);
        }
printf("\n");
return 0;
}

          