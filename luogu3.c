/*���� 2 ��ʼ�������жϸ�����Ȼ���ǲ�������������������ͻ���������װ��ڴ���
 �ڴ��ĸ��������ǿڴ������������֮�͡�
װ�������ĺͲ��ܳ��� L������ L�����ʿڴ�����װ�¼���������
 ����Щ������С���������Ȼ����������װ�µ������ĸ���������֮���û��и���*/
#include<stdio.h>

 int isnum(int num)
{
    if(num<2) return 0;
    if(num==2) return 1;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0) return 0;
    }
    return 1;
}
int main()
{
int sum=0,L,count=0;
scanf("%d",&L);

if(L<2) printf("0\n"); 
else
{
for(int i=2;sum<=L;i++)
    {
        if(isnum(i)) 
        {
           if(sum+i>L) break;
           printf("%d\n",i);
           count++;
           sum+=i;
        }
    }
printf("%d\n",count);
}
return 0;
}
    