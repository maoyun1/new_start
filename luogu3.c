/*他从 2 开始，依次判断各个自然数是不是质数，如果是质数就会把这个数字装入口袋。
 口袋的负载量就是口袋里的所有数字之和。
装的质数的和不能超过 L。给出 L，请问口袋里能装下几个质数？
 将这些质数从小往大输出，然后输出最多能装下的质数的个数，数字之间用换行隔开*/
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
    