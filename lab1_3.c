#include<stdio.h>
#include<math.h>
int main()
{

    int n,m,sum;
    scanf("%d",&n);
    if(n>=0&&n<pow(10,1000000))
    {
            sum=(n%3);
            m=(n%11);
            printf("%d %d",sum,m);
    }
    return 0;
}
