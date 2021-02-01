#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=0&&a<=1000000000)
    {
        if(b>=0&&b<=1000000000)
        {
            sum=a+b;
            printf("%d",sum);
        }
    }
    return 0;
}
